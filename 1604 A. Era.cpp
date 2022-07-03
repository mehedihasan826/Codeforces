#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t,n,i,x;
    cin>>t;
    while(t--){
        cin>>n;
        int cnt=0;
        for(i=1;i<=n;i++){
            cin>>x;
            if(x>i+cnt)cnt+=x-(i+cnt);
        }
        cout<<cnt<<endl;
    }
}
