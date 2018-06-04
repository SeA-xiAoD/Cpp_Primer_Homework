#include <iostream>
#include <memory>
#include <string>
#include <vector>
#include "StrBlob.h"
#include "StrBlobPtr.h"

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