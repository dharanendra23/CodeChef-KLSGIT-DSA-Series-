#include <bits/stdc++.h>
#include <math.h>
using namespace std;

#define ll long long
#define ff first
#define ss second
#define pb push_back
#define vi vector<int>
#define vll vector<long long int>

int main()
{
#ifndef ONLINE_JUDGE
    freopen("in.txt", "r", stdin);
    freopen("out.txt", "w", stdout);
#endif

    std::ios::sync_with_stdio(false);

    ll t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        string s;
        cin >> s;
        int ca = n, cb = n;
        int sa = 0, sb = 0;
        for (int i = 0; i < 2 * n; i++)
        {
            if (i % 2 == 0)
            {
                sa = sa + (s[i] - '0');
                ca--;
            }
            else
            {
                sb = sb + (s[i] - '0');
                cb--;
            }
            if (sa > sb + cb)
            {
                cout << i + 1 << endl;
                break;
            }
            else if (sb > sa + ca)
            {
                cout << i + 1 << endl;
                break;
            }
            else if (sa == sb && i == 2 *n-1)
            {
                cout << i + 1 << endl;
                break;
            }
        }
    }
}