#include <iostream>
//#include <Windows.h>
#include <string>
#include <fstream>
#include <conio.h>
#include <cstdlib>
#include <clocale>

using namespace std;

int main() {

//    SetConsoleCP(1251);
//    SetConsoleOutputCP(1251);
    setlocale(LC_ALL, "Russian");

    char c;
    int k=-1;
    int d;
    string a,b;
    string path = "TODO_list.txt";

    ofstream fout;
    fout.open(path, ofstream::app);

    if (!fout.is_open())
    {
        cout << "\nÎøèáêà ôàéëà!\n";
    }

    ifstream fin;
    fin.open(path);

    if (!fin.is_open())
    {
        cout << "Îøèáêà îòêðûòèÿ ôàéëà!\n\n";
        return 0;
    }
    else
    {
        cout << "\nÔàéë îòêðûò!\n";
    }

    cout << "\nÂàø TODO ëèñò:\n";

    while (!fin.eof())
    {
        b = "";
        getline(fin, b);
        cout << b << endl;
        k++;
    }

    
    mark1:
    cout << "\nÂâåäèòå íîâûé TODO ïóíêò:\n";
    getline(cin, a);
    if (a != ""){
        k++;
        fout << k << ")"<< a << endl;
        cout << a + " - äîáàâëåííî";
    }
    else
    {
        cout << "Îøèáêà, ïóñòûå äàííûå!";
    }

    cout << "\n\n 0 - âûõîä";
    cout <<    "\n 1 - äîáàâèòü åù¸";
    cout << "\n 3 - óäàëèòü ïóíêò";

    c = _getch();
    switch (c)
    {
        case '0': cout << endl; return 0; break;
        case '1': goto mark1;
        case '3': break;
    }

//    cout << "\nÂûáåðèòå ñòðîêó êîòîðóþ Óäàëèòü:";
//    cin >> d;



    fin.close();
    fout.close();
    return 0;
}
