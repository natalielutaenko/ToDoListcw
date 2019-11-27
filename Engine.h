#ifndef Engine_h
#define Engine_h

#include <iostream>
#include <fstream>
using namespace std;
class Engine{    

public:
	void add_line(string path,string line, int k);
    void delete_line(string path, int del_k);
    void write_list(string path, string stroka);
	void delete_list(string path);
};


#endif
