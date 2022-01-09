#include<bits/stdc++.h>
using namespace std;

int main() {

    // vector<int> v;
    // v.push_back(10);
    // v.push_back(20);
    // v.push_back(30);
    // v.push_back(40);

    // for(auto it = v.begin(); it != v.end(); it++) {

    //     cout << *it << " ";
    // }
    // cout << endl;
    
    // set<int> s;
    // s.insert(10);
    // s.insert(20);
    // s.insert(10);
    // s.insert(30);

    // for(auto it = s.begin(); it != s.end(); it++) {

    //     cout << *it << " ";
    // }

    // map<int, string> mp;

    // mp.insert({2, "name1"});
    // mp.insert({3, "name2"});
    // mp.insert({1, "name3"});

    // for(auto it = mp.begin(); it != mp.end(); it++) {

    //     cout << it->first << " " << it->second << endl;
    // }

    priority_queue<int> pq;

    pq.push(10);
    pq.push(1);
    pq.push(2);
    pq.push(20);
    pq.push(5);

    // cout << pq.top() << endl;

    // pq.pop();
    
    // cout << pq.top() << endl;

    // while(!pq.empty()) {

    //     cout << pq.top() << endl;
    //     pq.pop();
    // }

    // cout << pq.size() <<endl;

    vector<int> v;

    v.push_back(20);
    v.push_back(5);
    v.push_back(1);
    v.push_back(40);
    
    for(auto it = v.begin(); it != v.end(); it++) {

        cout << *it << " "; 
    }
    cout << endl;

    sort(v.begin(), v.end());
    
    return 0;
}
