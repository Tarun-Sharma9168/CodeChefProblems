#include<iostream>
using namespace std;
#define ll long long
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);


    ll t;
    cin>>t;

    ll n,f;
    ll a,b,c,d,e;
    ll s;

    while(t--)
    {
       cin>>n;
       cin>>a;
       int tmp=1; 
       for(int i=1;i<=n;i++)
       {
             tmp=tmp*10;
       }
       s=2*tmp+a;
       cout<<s<<"\n";
       cin>>b;
       c=tmp-b;
       cout<<c<<"\n";
       cin>>d;
       e=tmp-d;
       cout<<e<<"\n";
       cin>>f;
       if(f==-1)
       break;
    }
 return 0;
}