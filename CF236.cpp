#include <bits/stdc++.h>
using namespace std;

int main() {
	int n = 0;
	string str;
	getline(cin, str);
	vector<char> arr(str.begin(), str.end());

	int num = 0;
	
	for (int i = 0; i < str.length(); i++) {
		for (int k = i+1; k < str.length(); k++) {
			if (str[i] == str[k]) {
				num++;
				break;
			}
		}
	}
	int sum = str.length() - num;

	string result = sum % 2 == 0 ? "CHAT WITH HER!" : "IGNORE HIM!";
	std::cout << result << endl;
	
}