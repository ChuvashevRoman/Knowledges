#include <iostream>

using namespace std; 
int n = 0;

void func() {
    cout << "Ты уже " << n << " раз меня вызывал, падла.";
    n++;
}

int main() {
    for (int i = 0; i < 10; i++) {
        func();
        cout << "\n";
    }
}