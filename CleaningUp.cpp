#include<iostream>
#include<algorithm>
#include<vector>
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

    ll n,m;
    int extra;
    while(t--)
    {
       
        cin>>n>>m;
        bool arr[n+1]={false};
        for(int i=0;i<m;i++)
        {
           cin>>extra;
           arr[extra]=true;
        }
         ll count=0;
         vector<ll> a;
         vector<ll> b;
        for(int i=1;i<=n;i++)
        {
            if(!arr[i])
            {
                if(count & 1)
                {
                  b.push_back(i);
                  count++;
                }
                else
                {

                  a.push_back(i); 
                  count++;
                }
            }
        }
        for(auto it:a)
        {
            cout<<it<<" ";
        }
        cout<<"\n";

        for(auto it:b)
        {
            cout<<it<<" ";
        } 
        cout<<"\n";
    }
return 0;
}