#include <iostream>
#include "Engine.h"

int main() {
    Engine e;
    
	//�����
	cout << "\n��� TODO ����:\n";

	while (!fin.eof())
	{
		stoka = "";
		getline(fin, stroka);
		cout << stroka << endl;
		k++;
	}

	//����������
	mark1:
	cout << "\n������� ����� TODO �����:\n";
	getline(cin, new_stoka);
	if (new_stoka != ""){
		k++;
		e.add_line(new_stoka,k);
		cout << new_stoka + " - ����������";
	}
	else
	{
		cout << "������, ������ ������!";
	}

	cout << "\n\n 0 - �����";
	cout << "\n 1 - �������� ���";

	c = _getch();
	switch (c)
	{
		case '0': cout << endl; return 0; break;
		case '1': goto mark1;
	}



	fin.close();
	fout.close();
    return 0;
}
