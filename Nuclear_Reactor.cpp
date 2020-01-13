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
         ll a,n,k;
         cin>>a>>n>>k;
         ll x[101]={0};
         for(int i=0;i<k;i++)
         {
             x[i] = a%(n+1);
             a/=(n+1);
         }
         for(int i=0;i<k;i++)
         {
             cout<<x[i]<<" ";
         }
         cout<<"\n";
    return 0;
}