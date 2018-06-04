#ifndef STRBLOBPRT_H
#define STRBLOBPRT_H

#include <iostream>
#include <string>
#include <vector>
#include <memory>
#include "StrBlob.h"


class StrBlobPtr{

public:
    StrBlobPtr() : curr(0) {}
    StrBlobPtr(StrBlob &a, unsigned sz = 0) : wptr(a.data), curr(sz) {}
    std::string& deref() const;
    StrBlobPtr& incr();

private:
    std::shared_ptr<std::vector<std::string> > check(unsigned, const std::string&) const;
    std::weak_ptr<std::vector<std::string> > wptr;
    unsigned curr;

};

#endif // !STRBLOBPRT_H
