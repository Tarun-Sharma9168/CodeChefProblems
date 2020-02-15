#include <bits/stdc++.h> 
using namespace std; 
int main() 
{

     long long int n,m; 
     cin>>n>>m;
    for(long long int i=0;i<m;i++)
    {
    	long long int q;
    	cin>>q;
    	if(q>=1 && q<=n+1)
    	{
    		cout<<"0"<<endl;
		}
		else if(q>n+1 && q<=2*n)
		{
			cout<<q%(n+1)<<endl;
		}
		else
		{
			cout<<((3*n+1)-q)<<endl;
		}
	}
}