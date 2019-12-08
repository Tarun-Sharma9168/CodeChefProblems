#include <iostream>
#include<algorithm>
#include<vector>
#include<utility>
#include<queue>
#include<stack>
using namespace std;
#define INT_MAX 2147483647;
#define mod 1000000007;
#define ulli unsigned long long int
int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); 
    cout.tie(NULL);
	int t;
	cin>>t;
	while(t--)
	{
	   ulli n;
	   cin>>n;
	   ulli arr[n];
	   int i;
	   for(i=0;i<n;i++)
	   {
	       cin>>arr[i];
	   }
	   if(n==1)
	   {
	       cout<<1<<endl;
	       continue;
	   }
	   sort(arr,arr+n);
	   vector<int>vect;
	   for(i=0;i<n;i++)
	   {
	       if(i==0 && arr[i+1]!=arr[i]+1)
	       {
	           vect.push_back(arr[i]);
	       }
	       else if(i==n-1 && arr[i]!=arr[i-1]+1)
	       {
	           vect.push_back(arr[i]);
	       }
	       else if(arr[i]!=arr[i-1]+1 && arr[i]!=arr[i+1]-1)
	       {
	           vect.push_back(arr[i]);
	       }
	   }
       int t=0;
	   while(!vect.empty())
	   {
	       if(vect[0]==vect[1]-2)
	       {
	           vect.erase(vect.begin());
	       }
	       vect.erase(vect.begin());
	       t++;
	   }
	   cout<<t<<endl;
	}
	return 0;
}
