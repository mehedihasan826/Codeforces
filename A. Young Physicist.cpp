#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    while(cin>>n)
    {
        int i,j,sum=0,x=0;
        int b[n][3];
        for(i=0; i<n; i++){
            cin>>b[i][0]>>b[i][1]>>b[i][2];
        }
        for(j=0; j<3; j++){
            for(i=0;i<n;i++)
            {
                sum+=b[i][j];
            }
            if(sum==0)x++;
        }
        if(x==3)
            cout<<"YES\n";
        else
            cout<<"NO\n";
    }

    return 0;
}
