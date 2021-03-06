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
    int n;
    while(t--)
    {
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        long long int friends=0;
        sort(arr,arr+n); 
        for(auto x:arr)
        {
            if(x <= friends)
            {
                friends++;
            }
            else
            {
                break;
            }
        }
        cout<<friends<<"\n";
    }
    return 0;
}