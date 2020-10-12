#include <iostream>
#include <math.h>
using namespace std;

int main() {
    system("chcp 65001");

    cout << "Треугольник на координатной плоскости\n";
    cout << "======================\n";

    int firstX, firstY;
    cout << "Введите координаты первой точки (через пробел): \n";
    cin >> firstX >> firstY;

    int secondX, secondY;
    cout << "Введите координаты второй точки (через пробел): \n";
    cin >> secondX >> secondY;

    int thirdX, thirdY;
    cout << "Введите координаты третьей точки (через пробел): \n";
    cin >> thirdX >> thirdY;

    if ((firstX == secondX && firstY == secondY)
        || (firstX == thirdX && firstY == thirdY)
        || (secondX == thirdX && secondY == thirdY)) {
        cout << "Точки совпадают.\n";
    } else if () {

    }
}