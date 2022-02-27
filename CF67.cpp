#include <iostream>
#include <vector>
#include <sstream>
#include <string>

/*
1) Ask for n and h, no error check
2) Ask for height of each person, check if n and count are same
3) check if each ai > h, if yes, sum + 2, else sum + 1
4) display sum
*/

using namespace std;

int main() {
	int n, h;
	string line;
	getline(cin, line);
	stringstream linestream(line);
	linestream >> n >> h;
	
	string str;
	getline(cin, str);
	stringstream ss(str);
	vector<int> height;

	int in = 0;
	while (ss >> in) {
		height.push_back(in);
	}
	
	int value = 0, sum = 0;
	while(!height.empty()){
		value = height.back();
		height.pop_back();

		sum += value > h ? 2 : 1;
	}
	cout << sum << endl;
}

