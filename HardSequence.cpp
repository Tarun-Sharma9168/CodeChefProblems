#include<iostream>
using namespace std;
int search(int *arr,int n)
{
    int count=0;
    for(int i=0;i<n;i++)
    {
        if(arr[i] == arr[n-1])
        {
            count++;
        }
    }
    return count;
}
int main()
{
    //Preprocesssing
    int arr[130];
    for(int i=0;i<130;i++)
    {
        arr[i]=0;
    }
    for(int i=1;i<128;i++)
    {
        int j=i-1;
        int dist=0;
        while(j>=0)
        {
             if(arr[i] == arr[j])
             {
                 dist=abs(i-j);
                 break;
             }
             j--;  
        }
        arr[i+1]=dist;
    }
    /*for(int i = 0;i<130;i++)
    {
        cout<<arr[i]<<" ";
    }
    */
    //cout<<"\n";
    int t;
    cin>>t;
    int n;
    while(t--)
    {
        cin>>n;
        //int search_one=arr[n-1];
        cout<<search(arr,n)<<"\n"; 
    }
    return 0;
}