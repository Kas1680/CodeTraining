#include <bits/stdc++.h>
using namespace std;

int main() {
	int n;
	cin >> n;

	int* arrHome = new int[n];
	int* arrGuest = new int[n];

	for (int i = 0; i < n; i++) {
		cin >> arrHome[i] >> arrGuest[i];
	}

	int result = 0;

	for (int i = 0; i < n; i++) {
		for (int k = 0; k < n; k++) {
			if (arrHome[i] == arrGuest[k]) {
				result++;

			}
		}
	}
	cout << result;
}