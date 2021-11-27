#include <iostream>
#include <algorithm>
using namespace std;

int main() {

	long long int n;
	cin >> n;

	long long int arr[n];
	for(int i = 0; i < n; i++) {

		cin >> arr[i];
	}

	sort(arr, arr+n);

	long long int ans = arr[n-1];
	for(int i = 0; i < n; i++) {

		if(arr[i] * (n - i) > ans) {

			ans = arr[i] * (n - i);
		}
	}

	cout << ans << endl;

	return 0;
}
