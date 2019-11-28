#include <iostream>
#include <string>
#include <fstream>
//#include <cstdlib>
#include "Engine.h"

int main() {
    Engine e;
    ifstream fread; // для чтения из файла fin
	char c; // для работы меню
	int del_k; // строка которую удаляем
	int iterator = 0; // cчётчик сторк
	string new_line, line;
    
	fread.open(path);
	while (!fread.eof())
	{
		k++;
		line = "";
		getline(fread, line);

	}
	fread.close();

mark0:
	cout << "\n 1 - добавить пункт";
	cout << "\n 2 - удалить пункт";
	cout << "\n 3 - вывести лист";
	cout << "\n 7 - удалить весь лист";
	cout << "\n 0 - выход\n";

mark00:
	c = _getch();
	switch (c)
	{
		case '0': cout << endl; return 0; break;
		case '1': goto mark1;
		case '2': goto mark2;
		case '3': goto mark3;
		case '7': goto mark4;
		default:  goto mark00;
	}
    
mark1:
	cout << "\nВведите новый TODO пункт:\n";
	getline(cin, new_line);
	if (new_line != ""){
		k++;
		e.add_line(path,new_line,k);
	}
	else
	{
		cout << "\nОшибка, пустые данные!\n";
	}
	goto mark0;

mark2:
	cout << "\nВведите сторку для удаляения:\n";

	while (!(cin >> del_k) || (cin.peek() != '\n')) // чтобы можно было вводить только цифры
	{
		cin.clear();
		while (cin.get() != '\n');
		cout << "Неверный тип данных!" << endl;
	}

	if (del_k <= 0 || del_k > k)
	{
		cout << "\nТакая сторка отсутсвует!\n";
	}
	else
	{
		e.delete_line(path, del_k);
		k--;
	}

	
	goto mark0;

mark3:
	e.write_list(path, line);
	goto mark0;

mark4:
	e.delete_list(path);
	k = 0;
	goto mark0;


    return 0;
}
