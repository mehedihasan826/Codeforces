// name: A. Round Down the Price
// link: https://codeforces.com/contest/1702/problem/A

#include <bits/stdc++.h>
using namespace std;

#define ull unsigned long long
#define endl "\n"

int main()
{
    //  ios_base::sync_with_stdio(false);
    // cin.tie(0);
    // cout.tie(0);

    int q;
    cin >> q;
    while (q--)
    {
        ull n;
        cin >> n;
        int x = log10(n);
        x = round(pow(10, x));

        cout << n - x << endl;
    }
    return 0;
}