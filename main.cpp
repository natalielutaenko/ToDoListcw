#include <iostream>
#include <Windows.h>
#include <string>
#include <fstream>
#include <conio.h>
#include <cstdlib>
#include "Engine.h"

int main() {
    Engine e;

	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);


	ifstream fread; // ��� ������ �� ����� fin
	char c;
	int k = -1; // c������ �����
	string new_stoka, stroka;
	string path = "TODO_list.txt";
    

	//��������� �����
	fread.open(path);
	cout << "\n��� TODO ����:\n";
	while (!fread.eof())
	{
		stroka = "";
		getline(fread, stroka);
		cout <<" " + stroka << endl;
		k++;
	}
	fread.close();

	//����
mark0:
	cout << "\n\n 1 - �������� �����";
	cout << "\n 2 - ������� �����";
	cout << "\n 3 - ������� ����";
	cout << "\n 4 - ������� ���� ����";
	cout << "\n 0 - �����\n";
mark00:
	c = _getch();
	switch (c)
	{
		case '0': cout << endl; return 0; break;
		case '1': goto mark1;
		case '2': goto mark2;
		case '3': goto mark3;
		case '4': goto mark4;
		default:  goto mark00;
	}


	//����������
mark1:
	cout << "\n������� ����� TODO �����:\n";
	getline(cin, new_stoka);
	if (new_stoka != ""){
		k++;
		e.add_line(path,new_stoka,k);
		goto mark0;
	}
	else
	{
		cout << "������, ������ ������!";
		goto mark0;
	}


mark2:





mark3:





mark4:
	ofstream fwrite;
	fwrite.open(path);
	fwrite.close();
	goto mark0;




    return 0;
}
