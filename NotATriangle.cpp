#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);
  cout.tie(nullptr); 
  freopen("input.txt","r",stdin);
  //freopen("output.txt","w",stdout);
  long long int n;
  while(1)
  {
  cin>>n;
  
  if(n==0)
  break;
  
  vector<long long int> vv;
  long long int count=0;

  long long int x=0;
  for(int i=0;i<n;i++)
  {
       cin>>x;
       vv.push_back(x);
  }
  long long int pp;
  sort(vv.begin(),vv.end());
  for(int i=0;i<n;i++)
  {
      for(int j=i+1;j<n;j++)
      {
           pp=vv.end() - upper_bound(vv.begin(),vv.end(),vv[i]+vv[j]);
           count=count+pp;
      }
  }
  cout<<count<<"\n";
  }
  return 0;
}