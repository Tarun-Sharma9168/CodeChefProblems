#include<iostream>
#include<algorithm>
#include<cstring>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cout.tie(nullptr);
    cin.tie(nullptr);

    freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    
    long long int n,k;
    cin>>n>>k;
    long long int arr[n];
    for(int i=0;i<n;i++)
    {
       cin>>arr[i]; 
    }
    if(k % 2 == 1)
    {
        k=1;
    }
    else if(k>0 && k%2== 0)
    {
        k=2;
    }

    for(int i=0;i<k;i++)
    { 
       long long int max=-1e10;
       for(int i=0;i<n;i++)
       {
            if(arr[i] > max)
            {
                max=arr[i];
            }
       }    
       for(int i=0;i<n;i++)
       {
           arr[i]=max-arr[i];
       }
    }
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    } 
    cout<<"\n";
    return 0;
}