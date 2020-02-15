#include<iostream>
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
    long long int n,k;
    while(t--)
    {
       cin>>n>>k;
       long long int arr[n];
       long long int sum=0;
       for(int i=0;i<n;i++)
       {
           cin>>arr[i];
           sum+=arr[i];
       }
       cout<<sum%k<<"\n";
    }
}