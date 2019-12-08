#include<unordered_map>
#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int t;
    cin>>t;
    int n;
    while(t--)
    {
       cin>>n;
       int p,s;
       unordered_map<int,int> gg;
       for(int i=0;i<n;i++)
       {
           cin>>p>>s;

           if(p==9 || p==10||p==11)
           {
               continue;
           }
           else
           {
                 gg[p]=max(gg[p],s);
           }
       }
       unordered_map<int,int> ::iterator it;
       int sum=0; 
       for(it=gg.begin();it!=gg.end();++it)
       {
           sum+=(it->second);
       }
       cout<<sum<<"\n"; 
    }
    return 0;
}