#include <iostream>

using namespace std; 

void func(int& n) {
    cout << "Ты уже " << n << " раз меня вызывал, падла.";
    n++;
}

int main() {
    int n = 0;
    for (int i = 0; i < 10; i++) {
        func(n);
        cout << "\n";
    }
}