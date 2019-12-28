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
    int n,k;
    while(t--)
    { 
        cin>>n>>k;
        int  arr[n+1];
        for(int i=0;i<=n;i++)
        {
            arr[i]=i;
        }
        swap(arr[k+1],arr[n]);
        for(int i=1;i<=n;i++)
        {
          cout<<arr[i]<<" ";
        }
    }
    return 0;
}