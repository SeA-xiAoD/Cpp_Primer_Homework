#include <iostream>

class X;
class Y;

class X{
    Y* yp;
};

class Y{
    X x;
};