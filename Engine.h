#ifndef Engine_h
#define Engine_h

#include <iostream>
#include <fstream>
using namespace std;
class Engine{    
	ofstream fout;
	ifstream fin;
	char c;
	int k = -1; // cчётчик сторк
	string new_stoka, stroka;
    string path = "TODO_list.txt";

public:
    void add_line(string line);
    void delete_line(int number);
    void write_list();
    void delete_list();
	void check_file();
};


#endif
