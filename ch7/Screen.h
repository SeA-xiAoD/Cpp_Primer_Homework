#ifndef SCREEN_H
#define SCREEN_H

#include <iostream>
#include "Window_mgr.h"

class Screen{

    friend void Window_mgr::clear(unsigned);

public:
    Screen() = default;
    Screen(unsigned w, unsigned h) : width(w), height(h), contents(w*h, ' '){}
    Screen(unsigned w, unsigned h, char c) : width(w), height(h), contents(w*h, c){}
    Screen& move(unsigned x, unsigned y);
    char get() const;
    Screen& set(char);
    Screen& set(unsigned x, unsigned y, char);
    Screen& display(std::ostream& os);

private:
    unsigned cursor_x;
    unsigned cursor_y;
    unsigned width;
    unsigned height;
    std::string contents;

};

#endif // !SCREEN_H