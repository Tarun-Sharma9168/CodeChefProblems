#include<iostream>
#include<algorithm>
using namespace std;
void FindTriplet(int *arr,int size,int x)
{
    sort(arr,arr+size);
    int count=0;
    for(int i=0;i<size-2;i++)
    {
        int l=i+1;
        int r=size-1;
        while(l<r)
        {
            if(( arr[i]+arr[l]+arr[r] ) == x)
            {
                count++;
                cout<<arr[i]<<" "<<arr[l]<<" "<<arr[r]<<"\n";
                l++;
                r--;
            }
            else if((arr[i]+arr[l]+arr[r]) < x)
            {
                l++;
            }
            else
            {
                r--;
            }
        }
    }
    cout<<count<<"\n";
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);

    int n;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        } 
        int x;
        cin>>x;
        FindTriplet(arr,n,x);
    return 0;
}