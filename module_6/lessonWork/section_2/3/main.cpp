#include <iostream>
using namespace std;

int main() {
    system("chcp 65001");

    cout << "Таблица степеней\n";
    cout << "======================\n";

    int n,k,i = 1, result = 1;
    cout << "Введите число, возводимое в степень: \n";
    cin >> k;
    cout << "Введите количество степеней, которое нужно вывести : \n";
    cin >> n;
    do {
        result *= k;
        cout << result;
        i++;
    } while (i != n);
}