#include<iostream>
#include<algorithm>
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
    while(t--)
    {
        unsigned long long int n,m;
        cin>>n>>m;
        unsigned long long int arr[n];
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        sort(arr,arr+n,greater<long long int>());
        unsigned long long int sum=0; 
        unsigned long long int count=0;
        bool flag=false;
        for(int i=0;i<n;i++)
        {    count++;        
             sum=sum+arr[i];
             if(sum >= m)
             {
                 flag=true;
                 break;
             }
        }
if(flag)
{
    cout<<count<<"\n";
}
else
{
 cout<<-1<<"\n";
}
}
    return 0;
}