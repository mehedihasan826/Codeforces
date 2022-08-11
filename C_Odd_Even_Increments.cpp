// name: C. Odd/Even Increments
// link: https://codeforces.com/contest/1669/problem/C

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
        int arr[n];
        bool check = true;

        for (int i = 0; i < n; i++)
            cin >> arr[i];

        int firstIndex = arr[0] % 2;
        int secondIndex = arr[1] % 2;

        for (int i = 0; i < n; i++)
        {
            if (i % 2 == 0 && arr[i] % 2 != firstIndex)
            {
                check = false;
                break;
            }

            if (i % 2 == 1 && arr[i] % 2 != secondIndex)
            {
                check = false;
                break;
            }
        }
        if (check)
            cout << "YES\n";
        else
            cout << "NO\n";
    }
    return 0;
}