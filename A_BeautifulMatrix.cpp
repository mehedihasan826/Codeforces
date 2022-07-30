//Proble: https://codeforces.com/problemset/problem/263/A

#include<bits/stdc++.h>

using namespace std;

int main()
{
    int arr[6][6], res=0,x,y;
    for(int i=0;i<5;i++)
    {
        for(int j=0;j<5;j++)
        {
            cin>>arr[i][j];
            if(arr[i][j]==1)
            {
                x=i; y=j;
            }
        }
    }
    cout<< (abs(x-2)+ abs(y-2))<<endl;

    return 0;
}