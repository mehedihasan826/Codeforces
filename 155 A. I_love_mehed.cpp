#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    while(cin>>n){
        int arr[n+5];
        for(int i=0;i<n;i++)
            cin>>arr[i];
        int maxi=arr[0], mini=arr[0], cnt=0;
        for(int i=1;i<n;i++){
            if(arr[i]>maxi){
                cnt++;
                maxi=arr[i];
            }
            else if(arr[i]<mini){
                cnt++;
                mini=arr[i];
            }
        }
        cout<<cnt<<endl;
    }
}
