#ifndef Engine_h
#define Engine_h

#include <iostream>
#include <fstream>
using namespace std;
class Engine{    
	

public:
	void add_line(string path,string line, int k);
    void delete_line(int number);
    void write_list();
    void delete_list();
};


#endif
