#include<iostream>
#include<algorithm>
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

       int *p=std::min_element(arr,arr+n);

       cout<<*p<<"\n";
    }
    return 0;
}