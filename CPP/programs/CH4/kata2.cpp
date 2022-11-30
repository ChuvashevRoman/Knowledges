#include <iostream>

using namespace std; 

int main() {
    int number, bits_one = 0;
    cin >> number;
    while (number != 0) {
        bits_one += (number % 2);
        cout << bits_one << "\n";
        number = number / 2;
    }  
    cout << bits_one;
}