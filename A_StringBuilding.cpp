// Name: A. String Building
// link: https://codeforces.com/contest/1671/problem/A

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
        int a = 0, b = 0;
        bool flag = true;
        if (s.size() == 1)
            cout << "NO\n";
        else
        {
            for (int i = 0; i < s.size() - 1; i++)
            {
                if (s[i] == 'a')
                {
                    a++;
                    b = 0;
                }
                else
                {
                    a = 0;
                    b++;
                }
                if ((a == 1 & s[i + 1] == 'b') || (b == 1 && s[i + 1] == 'a'))
                {
                    flag = false;
                    break;
                }
            }
            if (s[s.size() - 1] == 'a')
                a++;
            else
                b++;
            if (a == 1 || b == 1)
                flag = false;
            if (flag)
                cout << "YES\n";
            else
                cout << "NO\n";
        }
    }
}