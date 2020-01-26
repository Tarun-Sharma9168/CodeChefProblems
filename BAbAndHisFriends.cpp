#include<iostream>
using namespace std;
#define ll long long;
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
cout.tie(nullptr);
freopen("input.txt","r",stdin);
//freopen("output.txt","w",stdout);
long long int  t;
cin>>t;
long long int n,a,b,c;
while(t--)
{
  cin>>n>>a>>b>>c;
  long long  arr[n];
  for(int i=0;i<n;i++)
  {
      cin>>arr[i];
  }
  long long int min=1e18;
  for(int i=0;i<n;i++)
  {
       if(abs(b-arr[i]) + abs(arr[i]-a) + c  < min)
       {
           min=abs(b-arr[i]) + abs(arr[i]-a) + c;
       }
  }
cout<<min<<"\n";
}
return 0;
}