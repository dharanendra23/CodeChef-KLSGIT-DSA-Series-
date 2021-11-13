#include <iostream>
#include <algorithm>
using namespace std;

int main() {

	int t;
	cin >> t;

	while(t--) {

		string str;
		cin >> str;

		string rev;

		for(int i = str.length() - 1; i >= 0; i--) {

			rev += str[i];
		}

		cout << stoi(rev) << endl;
	}

	return 0;
}
