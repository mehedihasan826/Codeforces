//Finding the desired number - applab ltd. coding test.

#include <bits/stdc++.h>
using namespace std;

vector<int> v;
int cnt;

void CheckSum(int arr[], int n, int cnt, vector<int> &v,
						int sum)
{
	if (sum == 0) {

		v.push_back(cnt); //found a subset sum equal to target. push_back element count of the subset.
		return;
	}

	if (n == 0)
		return;

	CheckSum(arr, n - 1, cnt, v, sum); //not including the last element in the subset.
	cnt++;
	CheckSum(arr, n - 1, cnt, v, sum - arr[n - 1]); // including last element int the subset. 
}

int main()
{
    int t; cin>>t;

    while(t--)
    {
        v.clear();

        int n, d;
         cin >> n>> d;
        int a[n+5];

        for(int i = 0; i < n; i++) 
        {
            cin>>a[i];
        }

        cnt = 0;

	    CheckSum(a, n, cnt, v, d);

        int res = v.size();

        if(res == 0)
        {
            cout<< "No\n";
        }
        else
        {
            sort(v.begin(), v.end());
            cout<< v[0] <<endl;
        }
    }
	return 0;
}