#include<iostream>
#include<set>
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
        int *arr=new int[n];
        set<int> ss;
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
            ss.insert(arr[i]);
        } 
    cout<<ss.size()<<endl;
    ss.clear();
    delete[] arr;
    }
return 0;
}