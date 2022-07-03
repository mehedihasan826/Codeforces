#include<bits/stdc++.h>
using namespace std;

int main()
{
	string s;
	int i;
	while(cin>>s){
		vector<char>num;
		int n=s.size();
		if(n==1){
			cout<<s<<endl;
		}
		else{
			for(i=0;i<n;i++){
				if(i%2==0) num.push_back(s[i]);
			}
			sort(num.begin(),num.end());
			for(i=0;i<num.size();i++){
				cout<<num[i];
				if(i<num.size()-1) cout<<"+";
			}
			cout<<endl;
		}
	}
}
