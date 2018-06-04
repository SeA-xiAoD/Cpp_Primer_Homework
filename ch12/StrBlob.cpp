#include <iostream>
#include <string>
#include <memory>
#include "StrBlob.h"
#include "StrBlobPtr.h"

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