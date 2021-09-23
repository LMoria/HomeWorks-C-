#include <iostream>
//#include "string"
using namespace std;

int main() {
    system("chcp 65001");

    cout << "Напоминалка\n";
    cout << "======================\n";

    int reminderNumbers, reminderCount = 0;
    string reminderPhrase;

    cout << "О чём нужно напомнить?: \n";
    getline(cin, reminderPhrase);
    //cin >> reminderPhrase;
    cout << "Сколько раз нужно напомнить? : \n";
    cin >> reminderNumbers;

    while (reminderCount < reminderNumbers) {
        cout << reminderPhrase<< "\n";
        reminderCount ++;
    }
}