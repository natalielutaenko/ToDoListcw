#include <iostream>
#include <string>
#include <fstream>
//#include <cstdlib>
#include "Engine.h"

int main() {
    Engine e;
    ifstream fread; // ��� ������ �� ����� fin
	char c; // ��� ������ ����
	int del_k; // ������ ������� �������
	int iterator = 0; // c������ �����
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
	cout << "\n 1 - �������� �����";
	cout << "\n 2 - ������� �����";
	cout << "\n 3 - ������� ����";
	cout << "\n 7 - ������� ���� ����";
	cout << "\n 0 - �����\n";

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
	cout << "\n������� ����� TODO �����:\n";
	getline(cin, new_line);
	if (new_line != ""){
		k++;
		e.add_line(path,new_line,k);
	}
	else
	{
		cout << "\n������, ������ ������!\n";
	}
	goto mark0;

mark2:
	cout << "\n������� ������ ��� ���������:\n";

	while (!(cin >> del_k) || (cin.peek() != '\n')) // ����� ����� ���� ������� ������ �����
	{
		cin.clear();
		while (cin.get() != '\n');
		cout << "�������� ��� ������!" << endl;
	}

	if (del_k <= 0 || del_k > k)
	{
		cout << "\n����� ������ ����������!\n";
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
