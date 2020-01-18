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
    ll k;
    while(t--)
    {    
          cin>>n>>k;

          if(k)
          cout<<(n/k)<<" "<<(n%k)<<"\n";
          else
          {
              cout<<0<<" "<<n<<"\n";    
          }
    }  
return 0;
}