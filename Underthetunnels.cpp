#include<iostream>
#include<cstring>
using namespace std;
int main()
{
ios_base::sync_with_stdio(false);
//cin.tie(nullptr);
//cout.tie(nullptr);
freopen("input.txt","r",stdin);
//freopen("output.txt","w",stdout);
long long int  t;
cin>>t;
long long int n,k;
//long long int extra;
string s;
while(t--)
{
  cin>>n>>k;

  char arr[n][n]={'0'};
  
  for(int i=0;i<n;i++)
  {
    cin>>s;
    for(int j=0;j<s.length();j++)
    {
        arr[i][j]=s[j];
    }
  }
  for(int i=0;i<n;i++)
  {
      arr[i][i]='0';
  }
 /*  for(int i=0;i<n;i++)
  {
      for(int j=0;j<n;j++)
      {
           cout<<arr[i][j]<<" ";
      }
      cout<<"\n";
  }
*/
 bool visited[n]={false};
 visited[0]=true;
 long long int min=0;
 int pp=0;
 bool flag=false;
 for(int i=0;i<n;)
 {
     for(int j=0;j<n;j++)
     {
          if((!visited[j]) && (arr[i][j] == '1'))
          {
              //cout<<"first test"<<"\n";
              //cout<<i<<" "<<j<<"\n";
              min++;
              flag=true;
              visited[j]=true;
              if( abs(pp-j) > k)
              {
                  flag=false;
                  break;
              }
              else
              {
                  pp=j;
                  break;
              }
          } 
     }
     if(!flag)
     {
          break;
     }
     i=pp;
 }
 if(flag)
 {
     cout<<min<<"\n";
 }
 else{
     cout<<"-1"<<"\n";
 }
}
return 0;
}