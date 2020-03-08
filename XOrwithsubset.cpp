#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
     ll t;
     cin>>t;
     while(t--)
     {
         ll n,k;
         cin>>n>>k;
         ll a[n];
         for( ll i=0;i<n;i++)
         {
             cin>>a[i];
         }
         set<ll> s;
         for(ll i=0;i<n;i++)
         {
             for(auto j:s)
             {  
                 s.insert(j^a[i]);
             }
             s.insert(a[i]);
         }
         ll ans=k;
         for(auto i:s)
         {
             ans=max(ans,i^k);
         }
         cout<<ans<<"\n";
     }
    return 0; 
}