#include<iostream>
#include<algorithm>
#include<map>
#include<vector>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cout.tie(nullptr);
    cin.tie(nullptr);
    freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    map<long long int,long long int> mp;
    long long int n,m;
          cin>>n>>m;
          long long int min=1+(n+1);
          long long int max=(n)+2*n;
          long long int diff = max-min;
          long long int k=1;
          long long int qq=max;
          long long int ll=min;
          //cout<<"BAllu"<<"\n";
          for(int i=0;i<=diff/2;i++)
          {
              //cout<<qq<<" "<<ll<<"\n";
               mp[qq]=k;
               mp[ll]=k;
               k++;
               qq--;
               ll++;
          }
        long long int pp;
        for(int i=0;i<m;i++)
        {
          cin>>pp;
          cout<<mp[pp]<<"\n";
        }     
    return 0;
}   