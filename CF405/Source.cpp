#include <bits/stdc++.h>
using namespace std;


void mergeThis(vector<int>& a, vector<int>& larr, vector<int>& rarr) {
	int leftSize = larr.size();
	int rightSize = rarr.size();

	int l = 0, r = 0, m = 0;

	while (l < leftSize && r < rightSize) {
		if (larr[l] <= rarr[r]) {
			a[m] = larr[l];
			l++;
		}
		else {
			a[m] = rarr[r];
			r++;
		}
		m++;
	}

	while (l < leftSize) {
		a[m] = larr[l];
		l++; m++;
	}

	while (r < rightSize) {
		a[m] = rarr[r];
		r++; m++;
	}
}

void printArray(vector<int>& a) {
	string str = "";
	for (int i = 0; i < a.size(); i++) {
		str += to_string(a[i]) + " ";
	}
	cout << str << endl;
}

void mergeSort(vector<int>& a) {
	int arrSize = a.size();

	if (arrSize < 2) {
		return;
	}

	int midi = arrSize / 2;
	vector<int> larr(midi);
	vector<int> rarr(arrSize - midi);

	for (int i = 0; i < midi; i++) {
		larr[i] = a[i];
	}
	for (int i = midi; i < arrSize; i++) {
		rarr[i - midi] = a[i];
	}

	mergeSort(larr);
	mergeSort(rarr);
	mergeThis(a, larr, rarr);
}

int main() {
	int n;
	cin >> n;
	vector<int> a;

	for (int i = 0; i < n; i++) {
		int k;
		cin >> k;
		a.push_back(k);
	}
	mergeSort(a);
	printArray(a);
}