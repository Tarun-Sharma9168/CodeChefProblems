#include<iostream>
using namespace std;
bool is_prime(int n)
{
    for(int i=2;i*i<=n;i++)
    {
        if(n % i == 0)
        return false;
    }
    return true;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    freopen("input.txt","r",stdin);
   //freopen("output.txt","w",stdout);
    int t;
    cin>>t;
    int n;
    while(t--)
    {
      cin>>n;
      int mini=1e9;
      if(is_prime(n))
      {
          cout<<(n-1)<<"\n";
      }
      else{
      for(int i=2;i*i<=n;i++)
      {
            if( n%i == 0 )
            {
                mini=min(n/i-i,mini);
            }      
      }
      cout<<mini<<"\n";
     }
    }
    return 0;
}