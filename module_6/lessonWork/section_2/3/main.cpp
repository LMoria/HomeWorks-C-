#include <iostream>
using namespace std;

int main() {
    system("chcp 65001");

    cout << "Таблица степеней\n";
    cout << "======================\n";
    int n,k, result = 1, count = 1;
    cout << "Введите число, возводимое в степень: \n";
    cin >> k;
    cout << "Введите количество степеней, которое нужно вывести : \n";
    cin >> n;

    while (count <= n) {
        //k = k * k;
        result = result * k;
        cout << result << "\n";
        //cout << k << "\n";
        count++;
    }
    cout << "The End\n";
}