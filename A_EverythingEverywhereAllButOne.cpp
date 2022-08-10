// Name: A. Everything Everywhere All But One
// link: https://codeforces.com/contest/1686/problem/A

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n, h, m;
        cin >> n >> h >> m;
        int bedtime = h * 60 + m;

        int h2, m2, wake, totalSleep = 1500;
        for (int i = 1; i <= n; i++)
        {
            cin >> h2 >> m2;
            wake = h2 * 60 + m2;
            if (wake < bedtime)
            {
                int temp = 1440 - bedtime;
                int temp2 = temp + wake;
                if (temp2 < totalSleep)
                    totalSleep = temp2;
            }
            else
            {
                int temp2 = wake - bedtime;
                if (temp2 < totalSleep)
                    totalSleep = temp2;
            }
        }
        cout << totalSleep / 60 << " " << totalSleep % 60 << endl;
    }
}