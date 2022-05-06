#include <bits/stdc++.h>
using namespace std;

int main() {
	int n, k;
	cin >> n;
	vector<int> arr;
	for (int i = 0; i < n; i++) {
		cin >> k;
		arr.push_back(k);
	}
	int maxN, minN;
	for (int i = 0; i < n; i++) {
		int compare = arr[i];
		maxN = max(abs(arr[n - 1] - compare), abs(compare - arr[0]));
		if (i == 0) {
			minN = abs(arr[i + 1] - compare);
		}
		else if(i == n - 1) {
			minN = abs(compare - arr[i - 1]);
		}
		else {
			minN = min(abs(compare - arr[i - 1]), abs(arr[i + 1] - compare));
		}
		cout << to_string(minN) << " " << to_string(maxN) << "\n";
		
	}
	
}