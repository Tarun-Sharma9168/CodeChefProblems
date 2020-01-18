#include<iostream>
#define ll long long 
using namespace std;
int main()
{

   ios_base::sync_with_stdio(false);
   cin.tie(nullptr);
   cout.tie(nullptr);
   freopen("input.txt","r",stdin);
   //freopen("output.txt","w",stdout);

   ll a;
   cin>>a;
   if(a%6 == 0  || a%6 ==1 || a%6 == 3)
   {
       cout<<"yes"<<"\n";
   }
   else
   {
       cout<<"no"<<"\n";
   }
   return 0;
}