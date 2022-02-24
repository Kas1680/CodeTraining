#include<bits/stdc++.h>
using namespace std;


int main() {
	int k, r, n = 1;
	cin >> k >> r;
	
	while (true) {
		int nPrice = k * n;
		if (nPrice % 10 == r || nPrice % 10 == 0) {
			cout << n;
			break;
		}
		n++;
	}
	return 0;
}