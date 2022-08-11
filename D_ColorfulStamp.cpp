// name: D. Colorful Stamp
// link: https://codeforces.com/contest/1669/problem/D

#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);

    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;
        string s;

        cin >> s;

        int x = 0, y = 0;
        bool flag = true;

        for (int i = 0; i < n; i++)
        {
            if (s[i] == 'R')
                x++;
            else if (s[i] == 'B')
                y++;
            else if (s[i] == 'W')
            {
                if ((x == 0 && y != 0) || (x != 0 && y == 0))
                {
                    flag = false;
                    break;
                }
                else
                {
                    x = 0;
                    y = 0;
                }
            }
        }
        if ((x == 0 && y != 0) || (x != 0 && y == 0))
        {
            flag = false;
        }
        if (flag)
            cout << "YES\n";
        else
            cout << "NO\n";
    }
    return 0;
}