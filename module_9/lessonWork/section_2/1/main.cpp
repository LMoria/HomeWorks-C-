#include <iostream>
#include <string>
#include <windows.h>
using namespace std;

int main() {
    system("chcp 65001");

    cout << "Начальник\n";
    cout << "======================\n";

    string answerRight = "Да, конечно, сделал", answer;
    do {
        cout << "Ты сделал работу?\n";
        getline(cin, answer);
    } while (answer != answerRight);
    cout << "Молодец!\n";
}