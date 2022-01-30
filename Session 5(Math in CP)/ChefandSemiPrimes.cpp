#include <bits/stdc++.h>
using namespace std;
#define int long long 
bool prime[201];

void findPrime() {
    
    memset(prime, true, sizeof(prime)); 
    for(int i = 2; i * i < 201; i++) {
        
        if(prime[i]) {
            
            for(int j = i*2; j < 201; j += i) {
                
                prime[j] = false;
            } 
        }
    }
}

signed main() {
    findPrime();
    
    vector<int> priMul;
    for(int i = 2; i < 201; i++) {
        
        if(prime[i]) {
            
            for(int j = i+1; j < 201; j++) {
                
                if(prime[j]) priMul.push_back(i*j);
            }
        }
    }
    
    set<int> sum;
    for(int i = 0; i < priMul.size(); i++) {
        
        for(int j = i; j < priMul.size(); j++) {
            
            sum.insert(priMul[i] + priMul[j]);
        }
    }
    
    int t;
    cin >> t;
    
    while(t--) {
        
        int n;
        cin >> n;
        
        if(sum.find(n) != sum.end()) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
	
	return 0;
}
