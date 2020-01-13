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

    int t;
    cin>>t;
    ll n;
    while(t--)
    {
        cin>>n;
        ll arr[n];
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        } 
        ll count=0;
        ll mini=arr[0];
        for(int i=1;i<n;i++)
        {
           if(arr[i] < mini)
           {
               count++;
               mini=min(arr[i],mini);
           }
        }
        cout<<count+1<<"\n";
    }
return 0;
}