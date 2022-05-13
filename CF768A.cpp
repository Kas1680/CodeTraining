#include<bits/stdc++.h>
using namespace std;

int main() {
	int n, count = 0;

	vector<int> arr;
	cin >> n;
	for (int i = 0; i < n; i++) {
		int k;
		cin >> k;
		arr.push_back(k);
	}

	if (n <= 2) {
		count = 0;
	}
	else {
		for (int i = 1; i < n - 1; i++) {
			if (arr[i - 1] < arr[i] && arr[i + 1] > arr[i]) {
				count++;
			}
		}
	}
	cout << count;
}
