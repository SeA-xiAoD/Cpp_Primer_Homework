#include <iostream>

class NoDefault{

public:
    NoDefault(int i)
    {
        this->i = i;
    }

private:
    int i;

};

class C{

public:
    C() : nd(0) {}

private:
    NoDefault nd;

};