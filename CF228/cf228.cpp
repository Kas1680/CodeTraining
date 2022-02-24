#include <bits/stdc++.h>
using namespace std;

/*
int main() {
	int arr[4];
	cin >> arr[0] >> arr[1] >> arr[2] >> arr[3];
	int count = 0;
	for (int i = 0; i < 4; i++) {
		for (int j = i+1; j < 4; j++) {
			if (arr[i] == arr[j]) {
				count++;
				break;
			}
		}
	}
	cout << count;
}
*/

// use set<int>

int main() {
	int a, b, c, d;
	cin >> a >> b >> c >> d;
	set<int> s{ a, b, c, d };
	cout << 4 - s.size();

}