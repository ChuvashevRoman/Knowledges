#include <iostream>
#include <string>

using namespace std; 

int main() {
    string s;
    cin >> s;
    bool flag =  true;
    if (s.length() == 0) return true;
    for (int i = 0; i < s.length(); i++) {
        for (int j = i + 1; j < s.length(); j++) {
            flag = (islower(s[i]) == islower(s[j])) ? false : flag;
        }
        cout << islower(s[i]);
    }
    cout << flag;
}