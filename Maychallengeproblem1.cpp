 /*
Author Name:Tarun Sharma
Problem Name:Coronavirus Spread
*/
		#include<bits/stdc++.h>
		using namespace std;
        struct combo
        {
            int min;
            int max;
        };
        combo func(int *arr,int n)
        {
            int max_val=0;
            int min_val=INT32_MAX;
            set<int> ss[n];
            int k=0;
            //int j=0; 
            bool flag=true;
            for(int i=0;i<n;)
            {
                flag=true;
                if(ss[k].find(arr[i]) == ss[k].end())
                {           
                     ss[k].insert(arr[i]);
                     if(i<n-1)
                     while(i < n-1)
                     {
                         if(arr[i+1]-arr[i] <= 2)
                         {
                             ss[k].insert(arr[i+1]);
                             i++;
                         }
                         else
                         {   flag=false;
                             i++;
                             break;
                         }
                     }
                     else
                     {
                         i++;
                     }
                     k++;
                }
                if(flag && i==n-1)
                {
                    i++;
                }
            }
            for(int i=0;i<k;i++)
            {
                //cout<<k<<"kk"<<"\n";
                //cout<<"RAM"<<"\n";
                //cout<<ss[i].size()<<" ";
                //cout<<ss[i].size()<<" ";
                if(ss[i].size() >= max_val)
                {
                    //cout<<"bablu"<<"\n";
                    max_val=ss[i].size();
                }   
                if(ss[i].size() < min_val)
                {
                    //cout<<"minbox"<<"\n";
                    min_val=ss[i].size();
                }
            }
            combo ans;
            ans.max=max_val;
            ans.min=min_val;
            return ans;
        }
		int main()
		{
				    ios_base::sync_with_stdio(false);
				    cin.tie(nullptr);
				    cout.tie(nullptr);

				    freopen("input.txt","r",stdin);
				    //freopen("output.txt","w",stdout);
				    int t;
				    cin>>t;

				    while(t--)
				    {
                          int n;
                          cin>>n;
                          int *arr=new int[n];
                          for(int i=0;i<n;i++)
                          {
                              cin>>arr[i];
                          }
                          combo pp=func(arr,n);
                          cout<<pp.min<<" "<<pp.max<<"\n";
                          delete[] arr;
				    }
				    return 0;
		}