#include <iostream>
#include <string>
#include <windows.h>
using namespace std;

int main() {
    system("chcp 65001");

    cout << "Начальник\n";
    cout << "======================\n";

    string answerRight = "Да, конечно, сделал";
    char * answer;
    char * kostyl = new char [50];
    do {
        cout << "Ты сделал работу?\n";
        cin.getline(answer, 50);
        CharToOemA(answer, kostyl);
        delete [] kostyl;
        cout << answer;
    } while (answer != answerRight);
    cout << "Молодец!\n";
}