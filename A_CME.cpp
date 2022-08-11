// name: A. CME
// link: https://codeforces.com/contest/1241/problem/A
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int q;
    cin >> q;
    while (q--)
    {
        long int n;
        cin >> n;
        if (n == 2)
            cout << "2\n";
        else
            (n & 1)
                ? cout << "1\n"
                : cout << "0\n";
    }
}
