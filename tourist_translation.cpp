#include<iostream>
#include<map>
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
    map<char,char> mp;

    char var;
    int coun=97;
    cin>>s;
    for(int i=0;i<26;i++)
    {
        var=s[i];
        char pp=coun;
        mp[pp]=var;
        coun++;
    }
    mp['_']= ' ' ;
    mp['?']= '?' ;
    mp['!']= '!' ;
    mp[',']= ',' ;
    mp['.']= '.' ;
    while(t--)
    {
        cin>>s;
        for(int i=0;i<s.length();i++)
        {
            char var=s[i];
            if((var >='a' && var<='z'))
            {
                char ans=mp[var];
                if(ans >='a' && ans <='z')
                {
                    cout<<mp[var];
                }
                else
                {
                    ans=ans+32;
                    cout<<ans;
                }
            }
            else if((var >='A' && var<='Z'))
            {
                char ans=mp[var+32];
                ans=ans-32;
                cout<<ans;
            }
            else {
                cout<<mp[var];
            }
       }
        cout<<"\n";
    }
    return 0;
}