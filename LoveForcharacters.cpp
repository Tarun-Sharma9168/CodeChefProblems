#include<iostream>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);

    int n;
    cin>>n;

    string s;
    cin>>s;
    int counta=0;
    int counts=0;
    int countp=0;
    for(int i=0;i<n;i++)
    {
        if(s[i]=='a')
        {
            counta++;
        }
        if(s[i]=='s')
        {
            counts++;
        }
        if(s[i]=='p')
        {
            countp++;
        }
    }
    cout<<counta<<" "<<counts<<" "<<countp<<"\n"; 
    return 0;

}
