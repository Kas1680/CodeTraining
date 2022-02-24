#include <bits/stdc++.h>
using namespace std;

int main() {
	int arr[5];
	cin >> arr[1] >> arr[2] >> arr[3] >> arr[4];
	string input;
	cin >> input;
	int sum = 0;

	for (int i = 0; i < input.length(); i++) {
		int k = input[i] - '0';
		sum += arr[k];
	}
	cout << sum;
}

