#include <iostream>
using namespace std;

int main() {
    system("chcp 65001");

    cout << "Грустное совершеннолетие\n";
    cout << "======================\n";

    int birthdayDay, birthdayMonth, birthdayYear;
    cout << "Введите дату рождения (день, месяц и год через пробел): \n";
    cin >> birthdayDay >> birthdayMonth >> birthdayYear;

    int todayDay, todayMonth, todayYear;
    cout << "Введите сегодняшнюю дату (день, месяц и год через пробел): \n";
    cin >> todayDay >> todayMonth >> todayYear;


    if ( (todayYear - birthdayYear > 18)
                || ((todayYear - birthdayYear == 18) && (birthdayMonth < todayMonth))
                || ((todayYear - birthdayYear == 18) && (birthdayMonth == todayMonth) && (todayDay > birthdayDay)) ) {
        cout << "Что предпочитаете? \n";
    } else if ((todayYear - birthdayYear == 18) && (birthdayMonth == todayMonth) && (todayDay == birthdayDay)) {
        cout << "Приходите завтра. \n";
    } else cout << "Несовершеннолетним алкоголь не продают. \n";
}