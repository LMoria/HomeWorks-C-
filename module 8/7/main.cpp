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

    if(moneyIssue > 150000) {
        cout << "Банкомат не может выдать такую сумму за раз. \n";
    } else if(moneyIssue < 100 && moneyIssue % 100 != 0) {
        cout << "Недопустимая сумма для вывода средств. \n";
    } else if(moneyIssue / denomination5000 != 0) {
        cout << "Для выдачи данной суммы потребуется " << moneyIssue / denomination5000 << " купюр номиналом 5000р.\n";
    } else if(moneyIssue / denomination2000 != 0 && moneyIssue % denomination2000 == 0) {
        cout << "Для выдачи данной суммы потребуется " << moneyIssue / denomination2000 << " купюр номиналом 2000р.\n";
    } else if(moneyIssue / denomination1000 != 0) {
        cout << "Для выдачи данной суммы потребуется " << moneyIssue / denomination1000 << " купюр номиналом 1000р.\n";
    } else if(moneyIssue / denomination500 != 0) {
        cout << "Для выдачи данной суммы потребуется " << moneyIssue / denomination500 << " купюр номиналом 500р.\n";
    } else if(moneyIssue / denomination200 != 0 && moneyIssue % denomination200 == 0) {
        cout << "Для выдачи данной суммы потребуется " << moneyIssue / denomination200 << " купюр номиналом 200р.\n";
    } else if(moneyIssue / denomination100 != 0) {
        cout << "Для выдачи данной суммы потребуется " << moneyIssue / denomination100 << " купюр номиналом 100р.\n";
    }
}