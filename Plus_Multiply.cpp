#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
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
       long long int count0=0;
       long long int count2=0;
       for(int i=0;i<n;i++)
       {
           if(arr[i]==0)
           {
               count0++;
           }
           if(arr[i]==2)
           {
               count2++;
           }
           if(arr[i]>2)
           {
               break;
           }
       }
       long long int sum=(count0*(count0-1))/2 + (count2 * (count2-1))/2 ;
       cout<<sum<<"\n";
    }
    return 0;
}