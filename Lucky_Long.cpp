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
    string s;
    while(t--)
    {
       cin>>s;
       int i=0;
       int res=0; 
       while(s[i]!='\0')
       {
             if(s[i]=='4' || s[i]=='7')
             {
                 res++;
             }
             i++;
       }
       cout<<(i-res)<<"\n";
    }
    return 0;

}