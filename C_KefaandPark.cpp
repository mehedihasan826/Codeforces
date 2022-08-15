//Name: C. Kefa and Park
//link: https://codeforces.com/contest/580/problem/C

#include<bits/stdc++.h>
using namespace std;

void addNode(int u, int v, vector<int> *edge)
{
    edge[u].push_back(v);
    edge[v].push_back(u);
}

void findLeaf(int *cnt, int *check, int *arr, int *m, int x, int y)
{
    if()
}

int main()
{
    int n,m,u,v;
    cin>>n>>m;

    int arr[n];
    for(int i=0;i<n;i++)
        cin>>arr[i];

    vector<int>edge[n];
    for(int i=0;i<n;i++)
    {
        cin>>u>>v;
        addNode(u,v,edge);
    }

    int cnt=0
    , check = 0;
    findLeaf(cnt,arr,m,1,edge[0][1]);
}