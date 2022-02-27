// Convert both string to lower or upper case first
// find the length of one string
// for each char that is different, find the difference

#include <bits/stdc++.h>
using namespace std;


void convertStr(string& str1, string& str2) {
	for (auto& c : str1) c = tolower(c);
	for (auto& c : str2) c = tolower(c);
}

int main() {
	string str1, str2;
	getline(cin, str1);
	getline(cin, str2);

	convertStr(str1, str2);
	int n = str1.length();
	int sum = 0;
	int k = 0;


	



	for (int i = 0; i < n; i++) {
		if (str2[i] > str1[i]) {
			k = -1;
		 }
		else if (str2[i] < str1[i]) {
			k = 1;
		}

		if (k != 0) {
			break;
		}
		// cout << "Comparing: " << str2[i] << " == " << str1[i] << " -- Difference: " << str2[i] - str1[i] << endl;
		// cout << sum << endl;
	}

	cout << k << endl;
}
