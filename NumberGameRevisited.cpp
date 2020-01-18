#include<iostream>
#define ll long long 
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);



    freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);

    ll t;
    ll n;
    cin>>t;
    while(t--)
    {
    cin>>n;
    if(n%4==1)
    {
        cout<<"ALICE"<<"\n";
    }
    else
    {
        cout<<"BOB"<<"\n";
    }
    }
    return 0;
}