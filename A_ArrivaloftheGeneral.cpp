// Name: A. Arrival of the General
// link: https://codeforces.com/problemset/problem/144/A

#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n,x, min = INT32_MAX, maxi = -1;
    int a,b;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>x;
        if(x<=min)
        {
            min = x;
            a=i;
        }
        if(x>maxi)
        {
            maxi = x;
            b = i;
        }
    }
    x = (n-1-a)+b;
    if(b>a) x--;

    cout<<x<<endl;

    return 0;
}