// name: B. Triple
// link: https://codeforces.com/contest/1669/problem/B

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        long int n;
        cin >> n;
        long int arr[n];

        for (int i = 0; i < n; i++)
            cin >> arr[i];

        sort(arr, arr + n);
        int cnt = 1;
        int flag = -1;
        for (int i = 1; i < n; i++)
        {
            if (arr[i] == arr[i - 1])
            {
                cnt++;
                if (cnt == 3)
                {
                    flag = arr[i];
                    break;
                }
            }
            else
                cnt = 1;
        }
        cout << flag << endl;
    }
    return 0;
}