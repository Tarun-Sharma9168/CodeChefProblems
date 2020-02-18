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
        int n;
        cin>>n;

        long long int sum_prefix=0;
        long long int sum_suffix=0;
        int arr[n];
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
            sum_suffix+=arr[i];
        }
        int i=0;
        long long int min=1e18;
        int index;
        while(i<n)
        {
            sum_prefix=sum_prefix+arr[i];
            if(sum_prefix + sum_suffix < min)
            {
                min=sum_prefix+sum_suffix;
                index=i;
            }
            sum_suffix=sum_suffix-arr[i];
            i++;
        }
        cout<<index+1<<"\n";
    }
    return 0;
}