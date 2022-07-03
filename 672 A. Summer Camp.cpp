#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,t;
    while(cin>>n){
            string num;
        for(int i=1;i<=n;i++)
        num+= to_string(i);
    cout<<num[n-1]<<endl;
    }
}
