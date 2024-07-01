#include <iostream>
#include <Windows.h>
#include <fstream>
#include <string>
#include <algorithm>

using namespace std;

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    
    /*//2-3
    ifstream F("1.txt");
    if (!F) {
        cout << "Файл не знайдено" << endl;
        return 1;
    }
    ofstream W("2.txt");
    if (!W) {
        cout << "Помилка з файлом" << endl;
        return 1;
    }
    string line;
    string mas[50];
    int index_mas = 0;
    while (getline(F, line)) {
        W << line << endl;
        mas[index_mas] = line;
        index_mas++;
    }
    reverse(mas, mas + (index_mas + 1));

    ofstream W2("3.txt");
    if (!W2) {
        cout << "Помилка з файлом" << endl;
        return 1;
    }
    for (int i = 0; i < (index_mas + 1); i++) {
        W2 << mas[index_mas] << endl;
    }
    cout << "Перезапис зроблено";
    F.close();
    W.close();
    W2.close();*/


    //4
    ofstream F("1.txt",ios::app);
    if (!F) {
        cout << "Файл не знайдено" << endl;
        return 1;
    }
    string line = "\n------------";
    F << line;
    F.close();
    cout << "Дозапис завершено" << endl;
    return 0;
}