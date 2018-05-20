#include <iostream>
#include "Window_mgr.h"
#include "Screen.h"

void Window_mgr::clear(unsigned index)
{
    Screen& s = this->screens[index];
    s.contents = string(s.width * s.height, ' ');
}