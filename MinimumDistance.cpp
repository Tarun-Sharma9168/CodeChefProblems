#include<iomanip>
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
    double ds,dt,d;
    while(t--)
    {
              cin>>ds>>dt>>d;
              double s=d-ds-dt;
              if(s < 0)
              {
                   if(ds+d < dt)
                   {
                       s=dt-ds-d;
                   }
                   else if(dt+d<ds)
                   {
                       s=ds-d-dt;  
                   }
              }
              cout<<s<<"\n";          
    }
    return 0;
}