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
    while(t--)
    {
        long long int n,k;
        cin>>n>>k;
        long int arr[n];
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        long int arr1[n];
        for(int i=0;i<n;i++)
        {
            cin>>arr1[i];
        }
        long long int max=-1e18;  
        for(int i=0;i<n;i++)
        {
            int pp=k/arr[i];
            if(pp*arr1[i] > max)
            {
                max=pp*arr1[i];
            }
        }
        cout<<max<<"\n";
    }
    return 0;
}