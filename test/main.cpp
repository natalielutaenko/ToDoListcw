#include <iostream>
#include "Engine.h"

int main(const int argc, const char *argv[]) {
    Engine e;
    e.add_line(argv[0],argv[1]);
    e.delete_line(argv[1]);
    
    return 0;
}
