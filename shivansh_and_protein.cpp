//time limit excedeed
#include<iostream>
#include<cmath>
#include<map>
using namespace std;
int main()
{ 
   ios_base::sync_with_stdio(false);
   cin.tie(nullptr);
   cout.tie(nullptr);
   freopen("input.txt","r",stdin);
   int t;
   cin>>t;
   int n,q;
   while(t--)
   {
       cin>>n>>q;
       int arr[n];
       for(int i=0;i<n;i++)
       {
           cin>>arr[i];
       }
       map<long long int,long long int> mp;
       int a,b;
       while(q--)
       {
           cin>>a>>b;
           for(int i=a;i<=b;i++)
           {
               mp[i]++;
           }
       }
       long long int max=-1e18;
       long long int max_ele;
       for(auto it=mp.begin();it!=mp.end();it++)
       { 
            if((it->second) > max)
            {
                max=it->second;
                max_ele=it->first;
            }
       }
       cout<<arr[max_ele-1]<<"\n";
   }
   return 0;
}