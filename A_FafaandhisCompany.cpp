// name: A. Fafa and his Company
// link: https://codeforces.com/contest/935/problem/A

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, cnt = 1;
    cin >> n;
    for (int i = 2; i <= sqrt(n); i++)
    {
        if (n % i == 0)
        {
            if (n / i == i)
            {
                cnt = cnt + 1;
            }
            else
            {
                cnt = cnt + 2;
            }
        }
    }
    cout << cnt << endl;
}
