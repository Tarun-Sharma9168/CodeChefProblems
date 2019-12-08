#include<bits/stdc++.h>
using namespace std;
#define ll  long long
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll n,k,t;
    cin>>t;
    while(t--){
    cin>>n>>k;
    string s;
    cin>>s;
    ll ar[n];
    for(ll i=0;i<n;i++)
    {
        ar[i]=s[i]=='1';//nice code you should write this way
    }
    ll mx=0;
    for(ll i=0;i<=n-k;i++)
    {
        ll cnt=k;
        for(ll j=i-1;j>=0;j--)//checking left side 1's if there 
        {
        if(ar[j]==1) 
        cnt++; 
        else 
        break;
        }
        for(ll j=i+k;j<n;j++)//checking rigth side 1's if there
            if(ar[j]==1)
            cnt++;
        else break;
        if(cnt>mx) mx=cnt;
    }
    if(n==k) mx=n;
    cout<<mx<<endl;
}
return 0;
}