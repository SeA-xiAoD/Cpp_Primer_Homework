#ifndef STRBLOB_H
#define STRBLOB_H

#include <iostream>
#include <memory>
#include <string>
#include <vector>
#include "StrBlobPtr.h"

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
    StrBlobPtr begin(){ return StrBlobPtr(*this); }
    StrBlobPtr end(){ 
        auto ret = StrBlobPtr(*this, data->size());
        return ret;
    }

private:
    std::shared_ptr<std::vector<std::string> > data;
    void check(unsigned i, const std::string& msg) const;
};

#endif // !STRBLOB_H
