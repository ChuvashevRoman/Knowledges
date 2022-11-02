#include <iostream>
using namespace std;
#include <curses.h>

char init() {

}

int main() {
    char type;
    char input;
    float temp;
    cout << "Добро пожаловать в программу преобразования едениц измерения температуры." << endl
    << "Для выхода из программы введите 'exit'"
    << "Выберите тип преобразования (из C в F - C, обратно - F) (C/F)";
    while (input = getch() != 'e') {
        if (input == 'C') {
            type = 'C';
        }
        if (type == 'C') {
            cout << "Введите число:";
            cin >> temp;
            cout << "Температура по фарингейту: " << temp * 9 / 5 + 32;
        }
        if (input == 'F') {
            type = 'F';
        }
        if (type == 'F') {
            cout << "Введите число:";
            cin >> temp;
            cout << "Температура по цельсию: " << (temp - 32) * 5 / 9;
        }
    }
}