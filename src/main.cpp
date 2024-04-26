#include <iostream>

int factorial(int x) {
	int result;

	if (x == 1) {
		return x;
	}
	else {
		result = x * (factorial(x - 1));
	}
	return result;
}

int main() {
	std::cout << factorial(5) << std::endl;
}