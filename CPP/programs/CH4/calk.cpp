// calk.cpp 
// калькулятор дробей
#include <iostream>
using namespace std; 

struct fraction
{
    int ch;
    int zn;
};

int main() {
    fraction dr1 = {0, 0};
    fraction dr2 = {0, 0};
    char oper;
    cout << "Введите первый операнд." << "\n";
    cout << "Числитель: ";
    cin >> dr1.ch;
    cout << "Знаменатель: ";
    cin >> dr1.zn;
    cout << "Операция: ";
    cin >> oper;
    cout << "Введите второй операнд." << "\n";
    cout << "Числитель: ";
    cin >> dr2.ch;
    cout << "Знаменатель: ";
    cin >> dr2.zn;
    cout << "Операция: ";
    switch(oper) {
        case '+':
            cout << "Результат вычислений: " << (dr1.ch * dr2.zn + dr2.ch * dr1.zn) / (dr1.zn * dr2.zn);
            break;
        case '-':
            cout << "Результат вычислений: " << (dr1.ch * dr2.zn - dr2.ch * dr1.zn) / (dr1.zn * dr2.zn);
            break;
        case '*':
            cout << "Результат вычислений: " << (dr1.ch * dr2.ch) / (dr1.zn * dr2.zn);
            break;
        case '/':
            cout << "Результат вычислений: " << (dr1.ch * dr2.zn) / (dr1.zn * dr2.ch);
            break;
    }
    cout << "\n";
    return 0;
}