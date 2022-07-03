#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,i;
    while(cin>>n){
        string s;
        int x=0;
        for(i=0;i<n;i++)
        {
            cin>>s;
            if(s[1]=='-')x--;
            else x++;
        }
        cout<<x<<endl;
    }
}
