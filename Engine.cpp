#include "Engine.h"
#include <string>

void Engine::add_line(string path, string line, int k){
	ofstream fwrite;
	fwrite.open(path, ofstream::app);
	fwrite << line << endl;
	fwrite.close();
};

void Engine::delete_line(string path, int del_k){//bla bla

	int kk = 0; //счётчик строк
	string line; //для хранения строки
	string line_file_text; //для хранения текста файла

	ifstream fread;
	fread.open(path);

	while (getline(fread, line))
	{
		kk++;

		if (!(kk == del_k))
		{
			//line_file_text.insert(line_file_text.size(), );

			line_file_text.insert(line_file_text.size(), line); /*дабавить строку*/

			line_file_text.insert(line_file_text.size(), "\r\n");/*добавить перенос на слудующую строку*/
		}
	}
	fread.close();


	ofstream fwrite;
	fwrite.open(path, std::ios::trunc | std::ios::binary); //открыть и обрезать

	//записать
	fwrite.write(line_file_text.c_str(), line_file_text.size());
	fwrite.clear();

	fwrite.close();
}

void Engine::write_list(string path, string stroka)
{
	int k = 0;
	ifstream fread;
	fread.open(path);
	cout << "\nВаш TODO лист:\n";
	while (!fread.eof()) // пока не конец файла
	{
		k++;
		stroka = ""; // затерам старое значение
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


