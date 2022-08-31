// link: https://codeforces.com/contest/1715/problem/A
// Name: A. Crossmarket

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
        if (n == 1 && m == 1)
            cout << "0\n";
        else
        {
            int a = max(n, m);
            int b = min(n, m);

            cout << a + b + b - 2 << endl;
        }
    }
}