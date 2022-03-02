#include <bits/stdc++.h>
using namespace std;

int main() {
	int n, m;
	cin >> n; // # of lines

	// Initialize with n + 1 of 0's, ignoring index 0
	vector<int> bird(n + 1, 0);
	// Insert the number of birds on each ith line
	for (int i = 1; i < bird.size(); i++) {
		cin >> bird[i];
	}

	cin >> m; // # of birds killed


	while(m > 0) {
		int line, victim;
		cin >> line >> victim; // get the line number and victim #
		int top = line - 1;
		int bot = line + 1;

		// Evaluate the line above current line
		if (top != 0) {
			bird[top] += victim - 1;
		}

		// Evaluate the line below current line
		if (bot != n + 1) {
			bird[bot] += bird[line] - victim;
		}

		bird[line] = 0;
		m--;
	}

	for (int i = 1; i < bird.size(); i++){
		cout << bird[i] << "\n";
	}

}