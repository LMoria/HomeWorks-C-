#include <iostream>
using namespace std;

int main() {
    system("chcp 65001");

    cout << "Сумма чисел\n";
    cout << "======================\n";
    int sumCount = 0, sumNumber, sumResult = 0, sumUnit;
    cout << "Введите количество чисел, которое нужно сложить друг с другом: \n";
    cin >> sumNumber;

    while (sumCount != sumNumber) {
        cout << "Введите число: \n";
        cin >> sumUnit;
        sumResult += sumUnit;
        sumCount ++;
    }
    cout << "Сумма чисел равна: \n" << sumResult;
}