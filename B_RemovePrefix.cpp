// Name: B. Remove Prefix
// link: https://codeforces.com/contest/1714/problem/B

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;
        int cnt = 0, arr[n];
        for (int i = 0; i < n; i++)
            cin >> arr[i];

        map<int, int> mp;

        for (int i = n - 1; i >= 0; i--)
        {
            mp[arr[i]]++;

            if (mp[arr[i]] > 1)
                break;
            cnt++;
        }

        cout << n - cnt << endl;
    }
}