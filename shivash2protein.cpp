#include <bits/stdc++.h>
using namespace std;
int main()
{
    //freopen("input.txt","r",stdin);
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int t;
    cin>>t;
    while(t--)
    {
        long n,q,x,y;
        cin>>n>>q;
        long long arr[n+1],ans[n+2]={0},res,maxi=0;
        for(int i=1;i<=n;i++)
            cin>>arr[i];
        while(q--)
        {
            cin>>x>>y;
            ans[x]++;
            ans[y+1]--;
        }
        /*for(int i=0;i<=n+1;i++)
        {   cout<<i+1<<" ";
            //cout<<ans[i]<<" ";
        }
        cout<<"\n";
        for(int i=0;i<=n+1;i++)
        {
                //cout<<i+1<<" ";
            cout<<ans[i]<<" ";
        }
        cout<<"\n";
        */
        for(int i=1;i<=n+1;i++)
        {
            ans[i]+=ans[i-1];
            if(ans[i]>maxi)
            {
                maxi=ans[i];
                res=arr[i];
            }
        }
       /* cout<<"\n";
        cout<<maxi<<"\n";
         for(int i=0;i<=n+1;i++)
        {
            cout<<ans[i]<<" ";
        }
        */
        cout<<res<<endl;
    }
    return 0;
}
