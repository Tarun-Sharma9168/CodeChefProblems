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
    long long int a,b;
    while(t--)
    {
        long long int count1=0;
        long long int count2=0;
        long long int main_count=0;
           cin>>a>>b;
           while(a!=b){
               while(a > b)
               {
                   a=a/2;
                   count1++;
               }
               while(b > a)
               {
                   b=b/2;
                   count2++;
               }
           }
               main_count=count1+count2;
               cout<<main_count<<"\n";
    }
    return 0;
}