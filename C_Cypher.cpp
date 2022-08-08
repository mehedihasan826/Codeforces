// Name: C. Cypher
// link: https://codeforces.com/problemset/problem/1703/C

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

        int current[n + 1], move[n + 1], initial;
        string pos[n + 1];

        for (int i = 0; i < n; i++)
        {
            cin >> current[i];
        }
        for (int i = 0; i < n; i++)
        {
            cin >> move[i];
            cin >> pos[i];
        }
        int ans[n + 1] = {0};

        for (int i = 0; i < n; i++)
        {
            initial = current[i];
            for (int j = 0; j < move[i]; j++)
            {
                if (pos[i][j] == 'D')
                {
                    if (initial == 9)
                        initial = 0;
                    else
                        initial++;
                }
                else
                {
                    if (initial == 0)
                        initial = 9;
                    else
                        initial--;
                }
            }
            ans[i] = initial;
        }
        for (int i = 0; i < n - 1; i++)
        {
            cout << ans[i] << " ";
        }
        cout << ans[n - 1] << endl;
    }
}