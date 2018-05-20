#include <iostream>
#include "Person.h"

Person::Person()
{
    this->name = "";
    this->address = "";
}

Person::Person(std::string name, std::string address)
{
    this->name = name;
    this->address = address;
}

std::string Person::getName()
{
    return this->name;
}

std::string Person::getAddress()
{
    return this->address;
}

std::istream& Person::read(std::istream& is, Person& p)
{
    is >> p.name >> p.address;
    return is;
}


std::ostream& Person::print(std::ostream& os, const Person& p)
{
    os << "Name: " << p.name << "   " << "Address: " << p.address;
    return os;
}