#ifndef Engine_h
#define Engine_h

#include <iostream>
#include <fstream>
using namespace std;
class Engine{    
    string path = "TODO_list.txt";
public:
    void add_line(string line);
    void delete_line(int number);
    void write_list();
    void delete_list();
private:
    void prepare_file();//for opening file
};


#endif
