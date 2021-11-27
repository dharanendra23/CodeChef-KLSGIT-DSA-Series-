#include <iostream>
#include <algorithm>
using namespace std;

int main() {

	int t;
	cin >> t;

	while(t--) {

		string str;
		cin >> str;

		int freq1[26] = {0}, freq2[26] = {0}, i, j;
		for(i = 0; i < str.length()/2; i++) {

			freq1[str[i] - 'a']++;
		}

		j = i;
		if(str.length() % 2 != 0) {

			j++;
		}

		for(i = j; i < str.length(); i++) {

			freq2[str[i] - 'a']++;
		}

		for(i = 0; i < 26; i++) {

			if(freq1[i] != freq2[i]) {

				break;
			}
		}

		if(i == 26) {

			cout << "YES" << endl;
		} else {

			cout << "NO" << endl;
		}
	}

	return 0;
}
