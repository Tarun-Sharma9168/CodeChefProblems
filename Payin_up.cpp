#include<iostream>
#include<algorithm>
#define ll long long
using namespace std;

//as n is very small recusrsion can work fine
int solve(ll j,ll sum,ll n,ll *arr)
{
   ll m,flag=0;
   for(int i=j;i<n;i++)
   {
       m=sum-arr[i];
       if(m==0)
       {
           return 1;
       }
       else if( m > 0)
       {
           flag = solve(i+1,m,n,arr);
           if(flag)
           return 1; 
       }
   }
   return 0;
}
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
        int flag=0;
        cin>>n>>k;
        ll arr[n];
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        sort(arr,arr+n);
        flag=solve(0,k,n,arr);
        if(flag)
        {
            cout<<"Yes"<<"\n";
        }
        else
        {
            cout<<"No"<<"\n";
        }
    }
return 0;
}