#include<iostream>
#include<algorithm>
#define ll long long int
using namespace std;
int main()
{
   ios_base::sync_with_stdio(false);
   cin.tie(nullptr);
   cout.tie(nullptr);

   freopen("input.txt","r",stdin);
   //freopen("output.txt","w",stdout);
   int t;
   cin>>t;
    ll n,k;
   while(t--)
   {
        cin>>n;
        ll arr[n];

        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }          
        cin>>k;
        ll main_answer=arr[k-1];
        sort(arr,arr+n);
        ll x=distance(arr,find(arr,arr+n,main_answer));

        cout<<(x+1)<<"\n"; 
   }  
return 0;
}