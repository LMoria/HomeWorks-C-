#include <iostream>
using namespace std;

int main() {
    system("chcp 65001");

    cout << "Банкомат-2\n";
    cout << "======================\n";

    int moneyIssue;
    cout << "Введите сумму для выдачи: \n";
    cin >> moneyIssue;

    // доступные номиналы купюр
    int denomination100 = 100;
    int denomination200 = 200;
    int denomination500 = 500;
    int denomination1000 = 1000;
    int denomination2000 = 2000;
    int denomination5000 = 5000;

    //счётчики купюр
    int counter100 = 0;
    int counter200 = 0;
    int counter500 = 0;
    int counter1000 = 0;
    int counter2000 = 0;
    int counter5000 = 0;

    if(moneyIssue > 150000 || moneyIssue < 100 && moneyIssue % 100 != 0 || moneyIssue / 10 % 10 > 0) {
        cout << "Недопустимая сумма для вывода средств. \n";
        return 0;
    } else if(moneyIssue / denomination5000 != 0) {
        counter5000 = moneyIssue / denomination5000;
    }

    //промежуточное
    int without5000 = moneyIssue - (counter5000 * 5000);

    if(without5000 / denomination2000 != 0) {
        counter2000 = without5000 / denomination2000;
    }

    //промежуточное
    int without2000 = without5000 - (counter2000 * 2000);

    if(without2000 / denomination1000 != 0) {
        counter1000 = without2000 / denomination1000;
    }

    //промежуточное
    int without1000 = without2000 - (counter1000 * 1000);

    if(without1000 / denomination500 != 0) {
        counter500 = without1000 / denomination500;
    }

    //промежуточное
    int without500 = without1000 - (counter500 * 500);

    if(without500 / denomination200 != 0) {
        counter200 = without500 / denomination200;
    }

    //промежуточное
    int without200 = without500 - (counter200 * 200);

    if(without200 / denomination100 != 0) {
        counter100 = without200 / denomination100;
    }

    cout << "Для выдачи данной суммы потребуется " << counter5000 << " купюр номиналом 5000р, " << counter2000 << " купюр номиналом 2000р, " << counter1000 << " купюр номиналом 1000р, " << counter500 << " купюр номиналом 500р, " << counter200 << " купюр номиналом 200р, " << counter100 << " купюр номиналом 100р.\n";
}