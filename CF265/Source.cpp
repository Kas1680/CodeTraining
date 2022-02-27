#include <bits/stdc++.h>
using namespace std;

int main() {
	string stone, inst;
	stack<char> s, t;
	cin >> stone;
	cin >> inst;
	int count = 1;
	int n = 0;
	
	// Solution 1
	for (int i = 0; i < inst.length(); i++) {
		if (stone[n] == inst[i]) {
			n++;
			count++;
		}
	}

	cout << count;
	

	// Solution 2 with Stack
	
	/*
	for (int i = stone.length() - 1; i >= 0; i--) {
		s.push(stone[i]);
	}
	for (int i = inst.length() - 1 ; i >= 0 ; i--) {
		t.push(inst[i]);
	}
	

	while (!t.empty() && s.size() != 1) {
		char a = s.top();
		char b = t.top();

		if (a == b) {
			count++;
			s.pop();
		}
		t.pop();

	}
	cout << count;
	*/
}