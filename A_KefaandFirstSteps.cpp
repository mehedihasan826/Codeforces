//Name: A. Kefa and First Steps
//Link: https://codeforces.com/contest/580/problem/A

#include<bits/stdc++.h>

using  namespace std;

int main()
{
    int n;
    while(cin>>n)
    {
        long int arr[n], check, cnt=1, cntMax =1;
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
            if(i==0) check = arr[i];

            else
            {
                if(arr[i]>=check)
                {
                    cnt++;
                    check =arr[i];
                }
                else
                {
                    if(cnt>cntMax) cntMax = cnt;
                    cnt=1;
                    check=arr[i];
                }
            }
        }
        cout<<max(cnt,cntMax)<<endl;
    }
}