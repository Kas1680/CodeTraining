#include <bits/stdc++.h>
using namespace std;

int main() {
	int y, w;
	cin >> y >> w;

	int num = (6 - max(y, w) + 1);
	int den = 6;

	if (num % 2 == 0 && den % 2 == 0) {
		while (num % 2 == 0 && den % 2 == 0) {
			num = num / 2;
			den = den / 2;
		}
	}
	if(den % num == 0) {
		den = den / num;
		num = 1;
	}

	printf("%d/%d", num, den);
}