#include<iostream>
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
    while(t--)
    {
       int n,m;
       cin>>n>>m;
       int a[n][m];
       for(int i=0;i<n;i++)
       {
           for(int j=0;j<m;j++)
           {
               cin>>a[i][j];
           }
       }
       int ans=0;
       for(int i=0;i<n;i++)
       {
           for(int j=0;j<m;j++)
           {
               int u,v,w,x;
               u=v=i;
               w=x=j;
               int cnt=0;
               while(u>=0 && v<n && w>=0 && x<m && a[u][j] == a[v][j] && a[i][w] == a[i][x])
               {
                   u--;
                   v++;
                   w--;
                   x++;
                   cnt++;
               }
               ans += cnt;
           }
       }
       cout<<ans<<"\n";
    } 
    return 0;
}