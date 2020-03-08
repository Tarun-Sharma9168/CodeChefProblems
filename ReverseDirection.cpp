#include<bits/stdc++.h>
#include<cstring>
using namespace std;
int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);


    freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);

	int t;
	cin>>t;
	while(t--)
	{
		int n,i=0;
		cin>>n;
		string s[n],x[n];
		for(int i=0;i<n;i++)
		{
			cin>>x[i];
			getline(cin,s[i]);
		}
		cout<<"Begin"<<s[n-1]<<endl;
		for(int i=n-1;i>0;i--)
		{
			if(x[i]=="Left")
			{
				cout<<"Right";
			}
			else
			{
				cout<<"Left";
			}
			cout<<s[i-1]<<endl;
		}
		cout<<endl;
	}
}
