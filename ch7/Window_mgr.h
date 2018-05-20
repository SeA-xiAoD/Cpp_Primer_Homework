#ifndef WINDOW_MGR_H
#define WINDOW_MGR_H

#include <iostream>
#include <vector>
#include "Screen.h"

class Window_mgr{

public:
    void clear(unsigned);

private:
    std::vector<Screen> screens;

};

#endif // !WINDOW_MGR_H
