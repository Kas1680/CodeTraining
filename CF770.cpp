#include<bits/stdc++.h>
using namespace std;

int main() {
	int n, k;
	cin >> n >> k;
	srand(time(NULL));
	int random = rand();
	int arr[27] = {0};

	while (k > 0) {
		int x = ((rand() % 26) + 1);
		if (arr[x] == 0) {
			arr[x]++;
		}
		else {
			k++;
		}
		k--;
	}

	vector<int> arr2;
	for (int i = 1; i < 27; i++) {
		if (arr[i] > 0 ) {
			arr2.push_back(i + 96);
		}
	}
	
	string output = "";
	for (int i = 0; i < n; i++) {
		int x = i % arr2.size();
		output += (char)arr2[x];
	}

	cout << output;
}
