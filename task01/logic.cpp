#include <iostream>
using namespace std;

int factorial(int number) {
	if (number < 0) {
		return -1;
	}
	int fac = 1;
	for (int i = 2; i <= number; i++) {
		fac *= i;
	}
	return fac;
}