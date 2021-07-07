#include <iostream>
using namespace std;

int main() {
    system("chcp 65001");

    cout << "Купи слона\n";
    cout << "======================\n";

    string answer;
    cout << "Привет! Как тебя зовут?\n";
    getline(cin, answer);
    cout << answer + ", купи слона!\n";
    do {
        getline(cin, answer);
        cout << "Все говорят: <<" + answer + ">>, а ты купи слона!\n";
    } while (answer != "10000");
}