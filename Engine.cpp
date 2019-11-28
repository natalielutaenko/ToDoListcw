#include "Engine.h"
#include <string>

void Engine::add_line(string line, int k){
	ofstream fwrite;
	fwrite.open(path, ofstream::app);
	fwrite << line << endl;
	fwrite.close();
};

void Engine::delete_line(int del_k){

	int kk = 0; //счётчик строк
	string line; //для хранения строки
	string line_file_text; //для хранения текста файла

	ifstream fread;
	fread.open(path);

	while (getline(fread, line)){
		kk++;

		if (!(kk == del_k)){
            line_file_text.insert(line_file_text.size(), line); /*дабавить строку*/
			line_file_text.insert(line_file_text.size(), "\r\n");/*добавить перенос на слудующую строку*/
		}
	}
	fread.close();
    
	ofstream fwrite;
	fwrite.open(path, std::ios::trunc | std::ios::binary); //открыть и обрезать

	fwrite.write(line_file_text.c_str(), line_file_text.size());
	fwrite.clear();

	fwrite.close();
}

void Engine::write_list(string line){
	int k = 0;
	ifstream fread;
	fread.open(path);
	cout << "\nTODO List:\n";
	while (!fread.eof()) // пока не конец файла
	{
		k++;
		line = ""; // затерам старое значение
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


