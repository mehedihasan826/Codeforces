// link - https://codeforces.com/problemset/problem/1707/A {UNSOLVED}

#include <bits/stdc++.h>
#include <Windows.h>
#include <unistd.h>
using namespace std;
int check(int arr[], int l, int r, int x)
{
    int mid = (l + (r - l)) / 2;

    while (l <= r)
    {
        sleep(1);
        printf("l = %d  r= %d mid = %d arr mid = %d\n", l, r, mid, arr[mid]);

        if (arr[mid] == x)
            return mid;
        else if (arr[mid] < x && arr[mid + 1] > x)
            return mid;
        else if (arr[mid] > x && arr[mid - 1] < x)
            return (mid - 1);

        mid = (l + (r - l)) / 2;

        if (arr[mid] < x)
            l = mid;

        else if (arr[mid] > x)
            r = mid;
    }
}

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int i, n, q;
        cin >> n >> q;
        int arr[n + 1];

        for (i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        sort(arr, arr + n);
        int l = 0;
        int r = n - 1;

        int x = check(arr, l, r, q);
        printf("mid found %d\n", x);

        x += q;
        while (n > 0)
        {
            if (x != 0)
                cout << "1";
            else
                cout << "0";
            x--;
            n--;
        }
        cout << endl;
    }
}