#include <iostream>

const int numberOfFibonnaci = 25;

int fibonacci[numberOfFibonnaci];

void printFibonacciNums(int i) {
	for (int j = 0; j < 3; j++) {
		std::cout << fibonacci[i + j] << std::endl;
	}
}

int main() {
	fibonacci[0] = 0;
	fibonacci[1] = 1;
	fibonacci[2] = 1;

	for (int i = 3; i < numberOfFibonnaci; i++) {
		fibonacci[i] = fibonacci[i - 1] + fibonacci[i - 2];
	}

	printFibonacciNums(3);

	return 0;
}
