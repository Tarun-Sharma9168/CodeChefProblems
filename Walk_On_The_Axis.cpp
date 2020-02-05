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
    long long int n;
    while(t--)
    {
        cin>>n;
        long long int sum=0;
        sum=n+n*(n+1)/2;
        cout<<sum<<"\n";
    }
    return 0;

}