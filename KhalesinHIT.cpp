#include<iostream>
#include<algorithm>
#include<cmath>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int t;
    cin>>t;
    int n;
    while(t--)
    {
         cin>>n;
         int arr[n];
         for(int i=0;i<n;i++)
         {
             cin>>arr[i];
         }
         sort(arr,arr+n);
         int k=n/4;
         int first_real=k;  
         int second_real=first_real+k;
         int third_real=first_real+2*k; 
         if(arr[first_real] ==arr[first_real-1] || arr[second_real]==arr[second_real-1] ||arr[third_real]==arr[third_real-1])
         {
                 cout<<"-1"<<"\n";
         } 
         else
         {
                 cout<<arr[first_real]<<" "<<arr[second_real]<<" "<<arr[third_real]<<"\n";
         }
    }
    return 0;
}