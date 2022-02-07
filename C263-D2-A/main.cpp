#include <iostream>
#include <sstream>
#include <string>
using namespace std;


int main() {
	int arr[6][6]; //7 because index starts at 1 not 0
	int x= 0, y = 0;
	for (int i = 1; i < 6; i++) {
		string line;
		getline(cin, line);
		stringstream ss(line);

		int j = 1;
		for (int j = 1; j < 6; j++) {
			ss >> arr[i][j];
			if (arr[i][j] == 1) {
				x = i;
				y = j;
			}
		}
	}
	int sum = (abs(x-3)) + (abs(y-3));
	cout << sum << endl;
	return 0;
}