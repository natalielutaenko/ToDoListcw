#include "Engine.h"

void Engine::check_file() {

	fout.open(path, ofstream::app);

	if (!fout.is_open())
	{
		cout << "\n������ �����!\n";
	}

	fin.open(path);

	if (!fin.is_open())
	{
		cout << "������ �������� �����!\n\n";
		return 0;
	}
	else
	{
		cout << "\n���� ������!\n";
	}
};

void Engine::add_line(string line, int k){

mark1:
	fout << k << ")" << line << endl;
};

void Engine::delete_line(int num){
    
};

