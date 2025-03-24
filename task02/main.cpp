#include <iostream>
using namespace std;

int main() {

	cout << "input number: ";
	int number;
	cin >> number;
	if (number <= 2) {
		return number - 1;
	}

	return 0;
}