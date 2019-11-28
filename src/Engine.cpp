#include "Engine.h"
#include <string>

void Engine::add_line(string line, int k){
	ofstream fwrite;
	fwrite.open(path, ofstream::app);
	fwrite << line << endl;
	fwrite.close();
};

void Engine::delete_line(int del_k){

	int kk = 0; //������� �����
	string line; //��� �������� ������
	string line_file_text; //��� �������� ������ �����

	ifstream fread;
	fread.open(path);

	while (getline(fread, line)){
		kk++;

		if (!(kk == del_k)){
            line_file_text.insert(line_file_text.size(), line); /*�������� ������*/
			line_file_text.insert(line_file_text.size(), "\r\n");/*�������� ������� �� ��������� ������*/
		}
	}
	fread.close();
    
	ofstream fwrite;
	fwrite.open(path, std::ios::trunc | std::ios::binary); //������� � ��������

	fwrite.write(line_file_text.c_str(), line_file_text.size());
	fwrite.clear();

	fwrite.close();
}

void Engine::write_list(string line){
	int k = 0;
	ifstream fread;
	fread.open(path);
	cout << "\nTODO List:\n";
	while (!fread.eof()) // ���� �� ����� �����
	{
		k++;
		line = ""; // ������� ������ ��������
		getline(fread, line);
		cout << k << ") " << line << endl;
	}
	fread.close();
}

void Engine::delete_list(){
	ofstream fwrite;
	fwrite.open(path, ios_base::trunc);
	fwrite.close();
}


