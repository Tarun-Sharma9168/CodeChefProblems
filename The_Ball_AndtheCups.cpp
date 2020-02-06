#include<iostream>
using namespace std;
typedef long double ld ;
typedef long long int ll ;
#define lob(a,x) lower_bound(a.begin(),a.end(),x)
#define upb(a,x) upper_bound(a.begin(),a.end(),x)
#define pub push_back
#define pob pop_back
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    ll n,c,q;
    int t;
    cin>>t;
    ll l,r;
    while(t--)
    {
        cin>>n>>c>>q;
        for(int i=0;i<q;i++)
        {
            cin>>l>>r;
            if(c >=l && c<=r)
            {
                c = r - (c-l);
            }
        }
        cout<<c<<"\n";
    }
    return 0;
}