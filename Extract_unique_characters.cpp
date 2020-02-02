#include<set>
#include<iostream>
#include<vector>
using namespace std;
vector<char> uniqueChar(string str)
{
    // Write your code here
    set<char> ss;
    int k=0;
   
    while(str[k]!='\0')
    {
      ss.insert(str[k]);
      k++;
    }   
    vector<char> vv;
    k=0;
    for(auto it=ss.begin() ; it!=ss.end() ; it++)
    {
          vv.push_back(*(it));
    }
    return vv;
}
int main()
{ 
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
       string str;
       cin>>str;
       vector<char> come_back=uniqueChar(str);
       
       for(int i=0;i<come_back.size();i++)
       {
           cout<<come_back[i];
       }
       cout<<"\n";
       return 0;
}