#include <iostream>
#include <limits.h>
using namespace std;
#define int long long 

signed main() {
	// your code goes here
	int t;
	cin >> t;
	
	while(t--) {
	    
	    
	    int n;
	    cin >> n;
	    
	    int arr[n], ans = 0, m = INT_MAX;
	    
	    for(int i = 0; i < n; i++) {
	        
	        cin >> arr[i];
	    }
	    
	    for(int i = 0; i < n; i++) {
	        
	        m = min(m, arr[i]);
	        ans += m;
	    }
	    
	    cout << ans << endl;
	}
	
	return 0;
}
