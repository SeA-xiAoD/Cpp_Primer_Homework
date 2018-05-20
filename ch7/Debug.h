#ifndef DEBUG_H
#define DEBUG_H

#include <iostream>

class Debug {
public:
    constexpr Debug(bool b = true) : hw(b), io(b), other(b) { }
    constexpr Debug(bool h, bool i, bool o) : hw(r), io(i), other(0) { }

    constexpr bool any() { return hw || io || other; }
    void set_hw(bool b) { hw = b; }
    void set_io(bool b) { io = b; }
    void set_other(bool b) { other = b; }
    
private:
    bool hw;        // runtime error
    bool io;        // I/O error
    bool other;     // the others
};

#endif // !DEBUG_H