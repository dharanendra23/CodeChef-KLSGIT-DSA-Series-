#include <iostream>
#include <algorithm>
using namespace std;

int main() {

	while(1) {

		int num;
		cin >> num;

		if(num != 42) {
			cout << num << endl;
		} else {
			break;
		}
	}

	return 0;
}
