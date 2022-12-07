#include <iostream>

using namespace std; 

void func() {
    static int n;
    cout << "Ты уже " << n << " раз меня вызывал, падла.";
    n++;
}

int main() {
    for (int i = 0; i < 10; i++) {
        func();
        cout << "\n";
    }
}