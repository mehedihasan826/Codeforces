// Problem link - https://codeforces.com/problemset/problem/1708/A

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
        int arr[n + 1];
        int flag = 0;
        for (int i = 0; i < n; i++)
            cin >> arr[i];

        for (int i = 1; i < n; i++)
        {
            if (arr[i] % arr[0] != 0)
            {
                flag = 1;
                break;
            }
        }
        if (flag)
            cout << "NO\n";
        else
            cout << "YES\n";
    }
    return 0;
}