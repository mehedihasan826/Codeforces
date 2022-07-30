//Name: A. Giga Tower
//link: https://codeforces.com/problemset/problem/488/A

#include<bits/stdc++.h>

using namespace std;

int main()
{
    long long n;
    cin>>n;

    long long i,res=0, flag=0;

    res= n;
    long long cnt = res;
    long long ans = n;
    while(true)
    {
        res--;
        cnt++;
        if(res%10==8)
        {
            break;
        }
        else if(cnt%10==8)
        {
            flag=1;
            break;
        }


    }
    if(flag) cout<<cnt- ans<<endl;
    else cout<<ans - res<<endl;

    return 0;
}