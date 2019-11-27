#include <iostream>
#include "Engine.h"

int main() {
    Engine e;
    
	//вывод
	cout << "\n¬аш TODO лист:\n";

	while (!fin.eof())
	{
		stoka = "";
		getline(fin, stroka);
		cout << stroka << endl;
		k++;
	}

	//добавление
	mark1:
	cout << "\n¬ведите новый TODO пункт:\n";
	getline(cin, new_stoka);
	if (new_stoka != ""){
		k++;
		e.add_line(new_stoka,k);
		cout << new_stoka + " - добавленно";
	}
	else
	{
		cout << "ќшибка, пустые данные!";
	}

	cout << "\n\n 0 - выход";
	cout << "\n 1 - добавить ещЄ";

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
