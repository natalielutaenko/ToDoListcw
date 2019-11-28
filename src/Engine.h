#ifndef Engine_h
#define Engine_h

#include <iostream>
#include <fstream>
using namespace std;
class Engine{    

    
public:
	string path = "TODO_list.txt";
    
	void add_line(string line, int k);
    void delete_line(int del_k);
    void write_list(string line);
	void delete_list();
};


#endif
