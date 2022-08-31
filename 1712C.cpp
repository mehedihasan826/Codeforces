// link: https://codeforces.com/contest/1712/problem/C
// Name: C. Sort Zero

#include <bits/stdc++.h>
using namespace std;

#define ull unsigned long long
#define endl "\n"

int main()
{
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int arr[n];

        for (int i = 0; i < n; i++)
            cin >> arr[i];
        unordered_map<int, int> mp;
        int cnt = 0;
        mp[arr[0]]++;
        for (int i = 1; i < n; i++)
        {
            if (arr[i] < arr[i - 1])
            {
                if (mp.find(arr[i]) == mp.end())
                {
                    cnt = mp.size();
                    mp[arr[i]]++;
                }
                else
                {
                    mp[arr[i]]++;
                    cnt = mp.size();
                }
            }
            else if (arr[i] > arr[i - 1])
            {
                if (mp.find(arr[i]) == mp.end())
                {
                    // cnt = mp.size();
                    mp[arr[i]]++;
                }
                else
                {
                    cnt = mp.size();
                    mp[arr[i]]++;
                }
            }
            else if (arr[i] == arr[i - 1])
            {
                // cnt = mp.size();
                mp[arr[i]]++;
            }
        }
        cout << cnt << endl;
    }
}