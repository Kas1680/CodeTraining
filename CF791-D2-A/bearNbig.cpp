#include <iostream>

int main() {
	int a, b, year = 0;
	std::cin >> a >> b;

	while (a <= b) {
		a = 3 * a;
		b = 2 * b;
		year++;
	}
	std::cout << year << std::endl;
}