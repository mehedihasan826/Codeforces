// name: A. Devu, the Singer and Churu, the Joker
// link: https://codeforces.com/contest/439/problem/A

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, d;
    cin >> n >> d;
    int sum = 0, x;

    for (int i = 0; i < n; i++)
    {
        cin >> x;
        sum += x;
    }
    int totaltime = ((n - 1) * 10) + sum;

    if (totaltime > d)
        cout << "-1\n";
    else
    {
        int jokes = ((n - 1) * 2) + ((d - totaltime) / 5);
        cout << jokes << endl;
    }
}
