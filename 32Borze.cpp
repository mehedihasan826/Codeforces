#include<bits/stdc++.h>
using namespace std;

int main()
{
        string s;
        cin>>s;
        int i,j,cnt=0,x=0;
        string r;
        int len=s.size();
        for(i=0;i<len;i++){
            if(s[i]=='.')cout<<"0";
            else if(s[i]=='-' && s[i+1]=='.'){cout<<"1";i++;}
            else if(s[i]=='-' && s[i+1]=='-'){cout<<"2";i++;}
        }
        cout<<endl;
        cout<<"Hello"<<endl;
}

