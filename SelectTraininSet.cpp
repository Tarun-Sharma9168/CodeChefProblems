#include<iostream>
#include<map>
#include<algorithm>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    freopen("input.txt","r",stdin);
    int t;
    cin>>t;
    int n;
    while(t--)
    {
       cin>>n;
       string s;
       int a;
       map<pair<string,int>,int> mp;
       while(n--)
       {
            cin>>s;
            cin>>a;
            mp[make_pair(s,a)]++;
       }
       
       /*for(auto mp_it = mp.begin(); mp_it != mp.end(); mp_it++)
       {
           pair<string ,int> pp=mp_it->first;
           int b=mp_it->second;
           //cout<<pp.first<<" "<<pp.second<<"  "<<b<<"\n";
       }
       */
       auto iit=mp.begin();
       pair<string,int> first_pair;
       pair<string,int> second_pair;
       long long int sum=0;
       int prev=0;
       //cout<<"First debug point"<<"\n";
       //cout<<(iit->first).first<<"\n";
       while(iit!=mp.end())
       {
           first_pair=(iit->first);
           prev=mp[{first_pair.first,first_pair.second}];
           //cout<<prev<<"\n";
           auto temp=++iit;
           if(temp!=mp.end())
           {
              second_pair=temp->first;
              if(first_pair.first == second_pair.first)
           {
                  sum=sum+max(mp[{first_pair.first,first_pair.second}],mp[{second_pair.first,second_pair.second}]);
                  ++iit;
           }
           else
           {
               sum=sum+prev;
           }
           }
           else
           {
               --iit;
                sum=sum+prev;
                ++iit;
           }  
       }
       cout<<sum<<"\n";
    } 
return 0;
}