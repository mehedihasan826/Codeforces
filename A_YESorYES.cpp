// name: A. YES or YES?
// link: https://codeforces.com/contest/1703/problem/A

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        if ((s[0] == 'y' || s[0] == 'Y') && (s[1] == 'E' || s[1] == 'e') && (s[2] == 's' || s[2] == 'S'))
            cout << s << endl;
        else
            cout << "NO\n";
    }
}