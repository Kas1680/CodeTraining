#include <iostream>

int main() {
	int n, p, v, t, solve = 0, sum;
	std::cin >> n;
	for (int i = 0; i < n; i++) {
		std::cin >> p >> v >> t;
		sum = p + v + t;
		if (sum > 1) {
			solve++;
		}
	}
	std::cout << solve << std::endl;
}