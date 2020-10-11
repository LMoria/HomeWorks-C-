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

    if ((birthdayMonth < 1 || birthdayMonth > 12) && (todayMonth < 1 || todayMonth > 12)) {
        cout << "Некорректная дата.\n";
    } else {
        int daysInMonth;
        if ( (birthdayMonth == 1 || birthdayMonth == 3 || birthdayMonth == 5 || birthdayMonth == 7 || birthdayMonth == 8 || birthdayMonth == 10 || birthdayMonth == 12)
             && (todayMonth == 1 || todayMonth == 3 || todayMonth == 5 || todayMonth == 7 || todayMonth == 8 || todayMonth == 10 || todayMonth == 12) ) {
            daysInMonth = 31;
        } else if ((birthdayMonth == 4 || birthdayMonth == 6 || birthdayMonth == 9 || birthdayMonth == 11) && (todayMonth == 4 || todayMonth == 6 || todayMonth == 9 || todayMonth == 11)) {
            daysInMonth = 30;
        } else if ((birthdayYear % 400 == 0 || (birthdayYear % 4 == 0 && birthdayYear % 100 != 0)) && (todayYear % 400 == 0 || (todayYear % 4 == 0 && todayYear % 100 != 0))) {
            daysInMonth = 29;
        } else daysInMonth = 28;

        if ((1 >= birthdayDay && birthdayDay >= daysInMonth) && (1 >= todayDay && todayDay >= daysInMonth)) {
            cout << "Некорректная дата.\n";
        } else if ((todayYear - birthdayYear < 18)
                   || ((todayYear - birthdayYear == 18) && (birthdayMonth == todayMonth) && (todayDay < birthdayDay)) ) {
            cout << "Несовершеннолетним алкоголь не продают. \n";
        } else if ( (todayYear - birthdayYear > 18)
                    || ((todayYear - birthdayYear == 18) && (birthdayMonth < todayMonth))
                    || ((todayYear - birthdayYear == 18) && (birthdayMonth == todayMonth) && (todayDay > birthdayDay)) ) {
            cout << "Что предпочитаете?. \n";
        } else if ((todayYear - birthdayYear == 18) && (birthdayMonth == todayMonth) && (todayDay == birthdayDay)) {
            cout << "Приходите завтра. \n";
        }
    }
}