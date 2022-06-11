#include<bits/stdc++.h>
using namespace std;

int main() {
	int n, k;
	string input;
	cin >> n;
	cin >> input;
	int arr [26];
	fill(begin(arr), end(arr),0);
	for (int i = 0; i < n; i++) {
		char ch = tolower(input[i]);
		k = ch - 97;
		arr[k]++;
	}

	int count = 0;
	for (int i = 0; i < 26; i++) {
		if (arr[i] > 0) {
			count++;
		}
	}
		
	if (count == 26) {
		cout << "YES";
	}
	else {
		cout << "NO";
	}
	return 0;
}