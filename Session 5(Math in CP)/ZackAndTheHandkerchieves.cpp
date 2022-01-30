// Link: https://www.codechef.com/LRNDSA05

#include<bits/stdc++.h>
using namespace std;
#define ll long long

int gcd(int a, int b) {

	if(b == 0) return a;
	// recursion call
	return gcd(b, a%b);
}


void solve() {
	
	int l, b;
	cin >> l >> b;

	cout << gcd(l, b) << endl;
}

int main(int argc, char const *argv[]) {
	
	ll t = 1;
	cin >> t;

	while(t--) {
	
		solve();
	}

	return 0;
}
