#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    vector<char> res;
    char x;
    int n,i,t=0;;
    cin>>s;
    n=s.size();
    for(i=0;i<n;i++)
    {
        if(s[i]<97) x=s[i]+32;
        else x=s[i];

        if(x!= 'a' && x!='e' && x!='i' && x!='o' && x!='u' && x!='y'){
            res.push_back('.');
            ++t;
            res.push_back(x);
            ++t;
        }
    }
    for(auto i: res) cout<<i;
    cout<<endl;
}
