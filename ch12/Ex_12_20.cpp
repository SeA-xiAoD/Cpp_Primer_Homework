#include <iostream>
#include <string>
#include <vector>
#include <memory>

class StrBlob;

class StrBlobPtr{

public:
    StrBlobPtr() : curr(0) {}
    StrBlobPtr(StrBlob &a, unsigned sz);
    std::string& deref() const;
    StrBlobPtr& incr();

private:
    std::shared_ptr<std::vector<std::string> > check(unsigned, const std::string&) const;
    std::weak_ptr<std::vector<std::string> > wptr;
    unsigned curr;

};

class StrBlob{
    friend class StrBlobPtr;

public:
    StrBlob() : data(std::make_shared<std::vector<std::string> >()) {};
    StrBlob(std::initializer_list<std::string> sv) : data(std::make_shared<std::vector<std::string> >(sv)){};
    unsigned size(){ return data->size(); }
    bool empty(){ return data->empty(); }
    void push_back(const std::string& s){ data->push_back(s); }
    void pop_back() { data->pop_back(); }
    std::string& front() const;
    std::string& back() const;
    StrBlobPtr begin();
    StrBlobPtr end(){ 
        auto ret = StrBlobPtr(*this, data->size());
        return ret;
    }

private:
    std::shared_ptr<std::vector<std::string> > data;
    void check(unsigned i, const std::string& msg) const;
};

std::string& StrBlob::front() const
{
    return this->data->front();
}

std::string& StrBlob::back() const
{
    return this->data->back();
}

void StrBlob::check(unsigned i, const std::string& msg) const
{
    if(i >= this->data->size())
        throw std::out_of_range(msg);
}


std::shared_ptr<std::vector<std::string> > StrBlobPtr::check(unsigned i, const std::string& msg) const
{
    auto ret = wptr.lock();
    if(!ret)
        throw std::runtime_error("unbound StrBlobPtr");
    if(i >= ret->size())
        throw std::out_of_range(msg);
    return ret;
}

std::string& StrBlobPtr::deref() const
{
    auto p = check(curr, "dereference past end");
    return (*p)[curr];
}

StrBlobPtr& StrBlobPtr::incr()
{
    check(curr, "dereference past end");
    ++curr;
    return *this;
}

StrBlobPtr::StrBlobPtr(StrBlob &a, unsigned sz = 0)
{
    wptr = a.data;
    curr = sz;
}

StrBlobPtr StrBlob::begin()
{
    return StrBlobPtr(*this); 
}

int main()
{
    StrBlob sb;
    std::string temp;
    while(std::cin >> temp)
        sb.push_back(temp);
    StrBlobPtr sbp(sb, 0);
    for(unsigned i = 0; i < sb.size(); i++)
    {
        std::cout << sbp.deref() << std::endl;
        sbp.incr();
    }
    return 0;
}