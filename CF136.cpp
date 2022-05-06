#include<bits/stdc++.h>
using namespace std;

int main() {
	int n, pi;
	cin >> n;	
	int arr[100];

	for (int i = 1; i <= n; i++) {
		cin >> pi;
		arr[pi] = i;
	}

	ostringstream oss;
	for (int i = 1; i <= n; i++) {
		oss << arr[i] << " ";
	}

	cout << oss.str();
}
