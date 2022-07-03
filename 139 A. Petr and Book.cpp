#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    while(cin>>n)
    {
        int arr[10];
        for(int i=0;i<7;i++)cin>>arr[i];
        int i=0;
        while(n!=0)
        {
            if(i==7)i=0;
            n-=arr[i];
            if(n<=0){
                break;
            }
            i++;
        }
        cout<<i+1<<endl;


    }
}
