#include "Engine.h"

void Engine::add_line(string path, string line, int k){
	ofstream fwrite;
	fwrite.open(path, ofstream::app);
	fwrite << k << ")" << line << endl;
	fwrite.close();
};

void Engine::delete_line(int num){
    
};

