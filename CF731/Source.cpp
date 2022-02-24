#include <bits/stdc++.h>
using namespace std;

/*

int main() {
	string input;
	cin >> input;

	const int k = 13;
	int current = 97;
	const int upperLim = 122;
	int totalRot = 0;
	int dest = 0;

	for (int i = 0; i < input.length(); i++) {
		dest = input[i];

		int halfway = current + k;
		// Check to see if we exceed upperLimit
		if (halfway > upperLim) {
			halfway = current - k;
		}

		// Add the difference in distance
		int test = abs(dest - halfway);
		totalRot += abs(13 - test);

		// Update current
		current = dest;
	}

	cout << totalRot;

}

*/

int main() {
	string s;
	cin >> s;

	// concatanate a and use it as the starting point
	string S = "a" + s;
	int n = S.length();
	int result = 0;

	// Compare distance from current to dest CW or CCW and see which one is smaller
	for (int i = 1; i < n; i++) {
		result += min(abs(S[i] - S[i - 1]), 26 - abs(S[i] - S[i - 1]));
	}

	cout << result;
}