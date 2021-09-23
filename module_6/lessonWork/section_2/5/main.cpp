#include <iostream>
using namespace std;

int main() {
    system("chcp 65001");

    cout << "Банкомат 3.0\n";
    cout << "======================\n";

    int pinCodeOne, pinCodeTwo, pinCodeThree, pinCodeFour, pinCodeResult = 0, pinCodeTrue = 42;

    while (pinCodeResult != pinCodeTrue) {
        cout << "Введите пин-код из четырёх цифр: \n";
        cin >> pinCodeOne;
        cin >> pinCodeTwo;
        cin >> pinCodeThree;
        cin >> pinCodeFour;
        pinCodeResult = pinCodeOne + pinCodeTwo + pinCodeThree + pinCodeFour;
        cout << pinCodeResult << "\n";
    }


}