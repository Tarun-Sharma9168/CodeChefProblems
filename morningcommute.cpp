#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int s,l,next,i,ans,p;
        cin>>s>>l>>next;
        ans=s+l;
        for(i=1;i<n;i++)
        {
            cin>>s>>l>>next;
            if(ans<=s)
            {
                ans=s+l;
            }
            else
            {
                
                while(s<ans)
                {
                    s=s+next;
                }
                ans=s+l;
            }
        }
        cout<<ans<<"\n";
    }
}
