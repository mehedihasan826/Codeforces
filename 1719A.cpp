// link: https://codeforces.com/contest/1719/problem/A
// Name: A. Chip Game

#include <bits/stdc++.h>
using namespace std;

#define ull unsigned long long
#define endl "\n"

int main()
{
    //  ios_base::sync_with_stdio(false);
    // cin.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;
        if ((n + m) % 2 == 0)
            cout << "Tonya\n";
        else
            cout << "Burenka\n";
    }
}