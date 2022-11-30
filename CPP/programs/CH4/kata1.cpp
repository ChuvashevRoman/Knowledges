#include <string>
#include <vector>
#include <string>
#include <iostream>

using namespace std; 

vector <string>  towerBuilder(unsigned nFloors) {
  vector <string> vtc;
  for (int j = 1; j <= nFloors; j++) {
    string s = string(nFloors-j, ' ') + string(j*2 - 1, '*') + (nFloors-j, ' ');
    vtc.push_back(s);
  }
  return vtc;
}

int main() {
    int n;
    cin >> n;
    vector <string> vtc;
    vtc = towerBuilder(n);
    for (auto now: vtc) {
      cout << now << '\n';
    }

}