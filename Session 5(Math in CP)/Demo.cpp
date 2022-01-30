#include<bits/stdc++.h>
using namespace std;

int N = 1e5+1;

int gcd(int a, int b) {

	if(b == 0) return a;
	// recursion call
	return gcd(b, a%b);
}


vector<bool> prime(N, true);
void seive() {

	prime[0] = prime[1] = false;

	for(int i = 2; i < N; i++) {

		if(prime[i] == true) {

			for(int j = i*2; j < N; j += i) {

				prime[j] = false;
			}
		}
	}

	for(int i = 0; i < 20; i++) {

		if(prime[i] == true) {

			cout << i << " ";
		}
	}
	cout << endl;
}

void solve() {
	
	// cout << gcd(4,  12) << endl;
	// int lcm = (4*12) / gcd(4, 12);

	// cout << lcm << endl;

	seive();
}

int main(int argc, char const *argv[]) {
	
	int t = 1;
	// cin >> t;

	while(t--) {
	
		solve();
	}

	return 0;
} 
