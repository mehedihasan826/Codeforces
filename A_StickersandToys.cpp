// name: A. Stickers and Toys
// link: https://codeforces.com/contest/1187/problem/A

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int q;
    cin >> q;
    while (q--)
    {
        long int n, s, t;
        cin >> n >> s >> t;

        if (s >= t)
            cout << n - t + 1 << endl;
        else
            cout << n - s + 1 << endl;
    }
}
