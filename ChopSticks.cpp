#include<iostream>
#include<algorithm>
#define ll long long
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    ll n,d;
    int t;
        cin>>n>>d;
        ll arr[n];
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        sort(arr,arr+n);
        ll count=0;
        for(int i=0;i<n;)
        {
            if(i+1 < n)
            {
                if(abs(arr[i]-arr[i+1]) <= d)
                {
                    count++;
                    i=i+2;
                }
                else
                {
                    i=i+1; 
                }
            }
            else{
                break;
            }
        }
        cout<<count<<"\n";
return 0;
}