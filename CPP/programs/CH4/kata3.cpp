#include <iostream>
#include <string>
#include <vector>

using namespace std; 

vector<string> number(vector<string> lines) {
    for (int i = 0; i < lines.size(); i++) {
        lines[i] = to_string(i + 1) + ": " + lines[i];
    }
    return lines;
}

int main() {
    vector<string> a = {"a", "v", "c"};
    vector<string> b = number(a);
    for (auto now: b) {
        cout << now << "\n";
    }
}