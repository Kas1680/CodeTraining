#include<bits/stdc++.h>
using namespace std;

int main() {
	string input;
	getline(cin, input);
	istringstream iss(input);
	string word;

	int cnt[26];
	memset(cnt, 0, 26 * sizeof(int));

	while (iss >> word) {
		char check;
		if (word.size() > 1) {
			for (char c : word) {
				if (isalpha(c)) {
					check = c;
				}
			}
		}

		cnt[check - 'a']++;
	}

	int count = 0;
	for (int i: cnt) {
		if (i > 0) {
			count++;
		}
	}
	cout << count;
}