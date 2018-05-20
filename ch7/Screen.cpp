#include <iostream>
#include "Screen.h"

Screen& Screen::move(unsigned x, unsigned y)
{
    this->cursor_x = x;
    this->cursor_y = y;
    return *this;
}

char Screen::get() const
{
    return this->contents[this->cursor_x * this->width + this->cursor_y];
}

Screen& Screen::set(char c)
{
    this->contents[this->cursor_x * this->width + this->cursor_y] = c;
    return *this;
}
    
    
Screen& Screen::set(unsigned x, unsigned y, char c)
{
    this->contents[x * this->width + y] = c;
    return *this;
}

Screen& Screen::display(std::ostream& os)
{
    for(int i = 0; i < this->height; i++)
    {
        for(int j = 0; j < this->width; j++)
        {
            os << this->contents[i * this->width + j];
        }
        os << "\n";
    }
    return *this;
}