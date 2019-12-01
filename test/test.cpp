#include <Engine.h>

int main(){
    Engine e;
    string line = "";
    if(e.add_line("hello",10) != 0)
        return -1;
    else
        return 0;
}
