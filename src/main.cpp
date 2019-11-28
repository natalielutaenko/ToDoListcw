#include <iostream>
#include <string>
#include <fstream>
//#include <cstdlib>
#include "Engine.h"
int k = -1;
char c; // для работы меню
int del_k; // строка которую удаляем
int iterator = 0; // cчётчик сторк
string new_line, line;
void add_line(Engine e){
	cout << "\n write new line :\n";
	//getline(cin, new_line);
	cin >> new_line;
	if (new_line != "") {
		k++;
		e.add_line(new_line, k);
	}
	else
	{
		cout << "\nerror\n";
	}
}
void delete_line(Engine e){
	cout << "\nwrite line for delete:\n";

	while (!(cin >> del_k) || (cin.peek() != '\n')) // чтобы можно было вводить только цифры
	{
		cin.clear();
		while (cin.get() != '\n');
		cout << "error" << endl;
	}

	if (del_k <= 0 || del_k > k)
	{
		cout << "\nТthis line not found\n";
	}
	else
	{
		e.delete_line(del_k);
		k--;
	}
}
void write_list(Engine e){ 
	e.write_list(line); }
void delete_list(Engine e){
	e.delete_list();
	k = 0;
}
int main() {
    Engine engine;
    ifstream fread; // для чтения из файла fin
	
    
	fread.open(engine.path);
	while (!fread.eof())
	{
		k++;
		line = "";
		getline(fread, line);

	}
	fread.close();
	while (true) {


		cout << "\n 1 - add line";
		cout << "\n 2 - delete line";
		cout << "\n 3 - write list";
		cout << "\n 7 - delete all list";
		cout << "\n 0 - exit\n";


		c = getchar();

		if (c == '\n')
			c = getchar();

		switch (c)
		{
		case '0':
			cout << endl;
			return 0;
			break;
		case '1':
			add_line(engine);
			break;
		case '2':
			delete_line(engine);
			break;
		case '3':
			write_list(engine);
			break;
		case '7':
			delete_list(engine);
			break;
		default:  break;
		}
	}
    return 0;
}
