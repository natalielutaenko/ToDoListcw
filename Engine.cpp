#include "Engine.h"
#include <string>

void Engine::add_line(string path, string line, int k){
	ofstream fwrite;
	fwrite.open(path, ofstream::app);
	fwrite << line << endl;
	fwrite.close();
};

void Engine::delete_line(string path, int del_k){//bla bla

	int kk = 0; //������� �����
	string line; //��� �������� ������
	string line_file_text; //��� �������� ������ �����

	ifstream fread;
	fread.open(path);

	while (getline(fread, line))
	{
		kk++;

		if (!(kk == del_k))
		{
			//line_file_text.insert(line_file_text.size(), );

			line_file_text.insert(line_file_text.size(), line); /*�������� ������*/

			line_file_text.insert(line_file_text.size(), "\r\n");/*�������� ������� �� ��������� ������*/
		}
	}
	fread.close();


	ofstream fwrite;
	fwrite.open(path, std::ios::trunc | std::ios::binary); //������� � ��������

	//��������
	fwrite.write(line_file_text.c_str(), line_file_text.size());
	fwrite.clear();

	fwrite.close();
}

void Engine::write_list(string path, string stroka)
{
	int k = 0;
	ifstream fread;
	fread.open(path);
	cout << "\n��� TODO ����:\n";
	while (!fread.eof()) // ���� �� ����� �����
	{
		k++;
		stroka = ""; // ������� ������ ��������
		getline(fread, stroka);	
		cout << k << ") " << stroka << endl;
	}
	fread.close();
}

void Engine::delete_list(string path)
{
	ofstream fwrite;
	fwrite.open(path, ios_base::trunc);
	fwrite.close();
}


