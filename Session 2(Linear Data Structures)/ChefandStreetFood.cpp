#include <bits/stdc++.h>

using namespace std;



int main()
{
#ifndef ONLINE_JUDGE
    freopen("in.txt", "r", stdin);
    freopen("out.txt", "w", stdout);
#endif

    std::ios::sync_with_stdio(false);

    int t;
    cin >> t;
    while (t--)
    {
        int n, max = 0, num;
        cin >> n;
        int s[n], p[n], v[n];
        for (int i = 0; i < n; i++)
        {
            cin >> s[i] >> p[i] >> v[i];
            num = (p[i] / (s[i] + 1)) * v[i];
            if (max < num)
                max = num;
        }
        cout << max << endl;
    }
}