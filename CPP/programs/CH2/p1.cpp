#include <iostream> 

using namespace std;

int main() {
	const int val1 = 10;
	int val2 = val1 + 10;
	cout << val1 << endl
	<< val2 << endl
	<< --val2;
	return 0;
}