#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main() {
	
	int t;
	cin>>t;
	while(t--)
	{
	    ll int n,i,j,ans=0,co=0,c2=0;
	    cin>>n;
	    for(i=0;i<n;i++)
	    {
	        cin>>j;
	        if(j>2)
	        {
	            co++;
	        }
	        else if(j==2){
	            c2++;
	    }
	    }
	    ans=(co*c2)+(co*(co-1)/2);
	    cout<<ans<<endl;
	
     }
}