// name: B. Devu, the Dumb Guy
// link: https://codeforces.com/contest/439/problem/B

#include <bits/stdc++.h>
using namespace std;

#define ull unsigned long long
#define endl "\n"

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ull x, n;
    cin >> n >> x;
    ull arr[n], total = 0;

    for (int i = 0; i < n; i++)
        cin >> arr[i];

    sort(arr, arr + n);

    for (int i = 0; i < n; i++)
    {
        total += arr[i] * x;
        if (x > 1)
            x--;
    }
    cout << total << endl;
}