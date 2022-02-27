#include<iostream>
#include <sstream>
#include <string>


int main() {
	int n;
	int d = 0, a = 0;

	std::string nvalue;
	getline(std::cin, nvalue);
	std::stringstream ss(nvalue);
	ss >> n;
	
	ss.clear();
	ss.str(std::string());
	
		
	std::string line, str;
	std::getline(std::cin, str);
	std::stringstream ss2(str);

	char win;
	while (ss2 >> win) {
		if (win == 'A') {
			a++;
		}
		else {
			d++;
		}
	}

	std::string result = a > d ? "Anton" : a == d ? "Friendship" : "Danik";
	std::cout << result << std::endl;
	
}

/*
int main()
{
	int n; cin >> n;
	string s; cin >> s;
	int k_a = 0, k_d = 0;
	for (int i = 0; i < n; i++)
		if (s[i] == 'A') k_a++; else k_d++;
	if (k_a > k_d) cout << "Anton" << endl;
	if (k_a < k_d) cout << "Danik" << endl;
	if (k_a == k_d) cout << "Friendship" << endl;
	return 0;
}

*/