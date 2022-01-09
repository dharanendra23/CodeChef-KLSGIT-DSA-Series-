#include<bits/stdc++.h>
using namespace std;

int main() {

    int t;
    cin >> t;

    while(t--) {

        int n, z;
        cin >> n >> z;

        priority_queue<int> pq;
        for(int i = 0; i < n; i++) {
            int power;
            cin >> power;

            pq.push(power);
        }

        int minAttack = 0;

        // strength of pain must be > 0 and atleast one soldier
        // must has strength > 0
        while(z > 0 && pq.top() > 0) {

            int power = pq.top();

            z -= power;
            pq.pop();
            pq.push(power/2);
            minAttack++;
        }

        if(z > 0) {
            cout << "Evacuate" << endl;
        } 
        else {

            cout << minAttack << endl;
        }
    }
    
    return 0;
}
