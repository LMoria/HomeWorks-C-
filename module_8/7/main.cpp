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

    if(moneyIssue > 150000 || (moneyIssue < 100 && moneyIssue % 100 != 0) || moneyIssue / 10 % 10 > 0) {
        cout << "Недопустимая сумма для вывода средств. \n";
        return 0;
    } else if(moneyIssue / denomination5000 != 0) {
        counter5000 = moneyIssue / denomination5000;
    }

    //промежуточное
    moneyIssue %= 5000;

    if(moneyIssue / denomination2000 != 0) {
        counter2000 = moneyIssue / denomination2000;
    }

    //промежуточное
    moneyIssue %= 2000;

    if(moneyIssue / denomination1000 != 0) {
        counter1000 = moneyIssue / denomination1000;
    }

    //промежуточное
    moneyIssue %= 1000;

    if(moneyIssue / denomination500 != 0) {
        counter500 = moneyIssue / denomination500;
    }

    //промежуточное
    moneyIssue %= 500;

    if(moneyIssue / denomination200 != 0) {
        counter200 = moneyIssue / denomination200;
    }

    //промежуточное
    moneyIssue %= 200;

    if(moneyIssue / denomination100 != 0) {
        counter100 = moneyIssue / denomination100;
    }

    cout << "Для выдачи данной суммы потребуется " << counter5000 << " купюр номиналом 5000р, " << counter2000 << " купюр номиналом 2000р, " << counter1000 << " купюр номиналом 1000р, " << counter500 << " купюр номиналом 500р, " << counter200 << " купюр номиналом 200р, " << counter100 << " купюр номиналом 100р.\n";
}