#include<bits/stdc++.h>
using namespace std;
#define ll long long

int gcd(int a, int b) {

	if(b == 0) return a;
	// recursion call
	return gcd(b, a%b);
}

void solve() {
	
	ll n, a, b, k;
	cin >> n >> a >> b >> k;

	ll diva, divb, divab;

	diva = n/a;
	divb = n/b;
	int lcm = (a*b) / gcd(a, b);
	divab = n / lcm;

	diva -= divab;
	divb -= divab;

	if((diva + divb) >= k) {

		cout << "Win" << endl;
	} else {

		cout << "Lose" << endl;
	}
}

int main(int argc, char const *argv[]) {
	
	ll t = 1;
	cin >> t;

	while(t--) {
	
		solve();
	}

	return 0;
}
