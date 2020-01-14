#include<iostream>
#include<map>
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
    ll  n1,n2,n3;
    cin>>n1>>n2>>n3;
    map<int,int> mp;
    ll a;
    for(int i=0;i<n1;i++)
    {
           cin>>a;
           mp[a]++;
    }
     for(int i=0;i<n2;i++)
    {
           cin>>a;
           mp[a]++;
    }
     for(int i=0;i<n3;i++)
    {
           cin>>a;
           mp[a]++;
    }
    vector<int> ans;
    for(auto it=mp.begin();it!=mp.end();it++)
    {
        if(it->second >= 2)
        {
            ans.push_back(it->first);
        }
    }
    cout<<ans.size()<<"\n";
    for(auto it:ans)
    {
        cout<<it<<"\n";
    }
    return 0;
}