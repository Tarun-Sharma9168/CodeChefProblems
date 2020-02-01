#include<iostream>
#include<vector>
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
      int arr[n];
      for(int i=0;i<n;i++)
      {
          cin>>arr[i];
      }  
      bool arr_bool[n]={0};
      int count=0;
      vector<vector<int>> vv1;
      for(int i=0;i<n;i++)
      {
          int k=i;
          if(arr_bool[k])
          {
              continue;
          }
          else{
              count++;
          arr_bool[k]=true;
          vector<int> vv;
          vv.push_back(k+1);
           while(arr[k] != i+1)
           {
               vv.push_back(arr[k]);
               arr_bool[arr[k]-1]=true;
               k=arr[k]-1;
           }
           vv.push_back(i+1);
           vv1.push_back(vv);
        }
    }
    cout<<count<<"\n";
    for(int i=0;i<vv1.size();i++)
    {
      for(int j=0;j<vv1[i].size();j++)
      {
          cout<<vv1[i][j]<<" ";
      }  
      cout<<"\n";
    }
    return 0;
}