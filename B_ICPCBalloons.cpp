// name: B. ICPC Balloons
// link: https://codeforces.com/contest/1703/problem/B

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        string s;

        cin >> s;
        int flag[26] = {0};
        int cnt = 0;
        for (int i = 0; i < n; i++)
        {
            if (flag[s[i] - 'A'] == 0)
            {
                flag[s[i] - 'A']++;
                cnt += 2;
            }
            else
                cnt++;
        }
        cout << cnt << endl;
    }
}