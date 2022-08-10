// Name: B. Honest Coach
// link: https://codeforces.com/contest/1360/problem/B

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
        int arr[n], ans = INT_MAX;
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        sort(arr, arr + n);

        for (int i = 1; i < n; i++)
        {
            int check = arr[i] - arr[i - 1];
            if (check < ans)
                ans = check;
        }

        cout << ans << endl;
    }
}