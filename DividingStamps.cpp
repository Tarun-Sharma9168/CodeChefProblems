#include<iostream>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
        int n;
        cin>>n;
        int sum=n*(n+1)/2;
        int another_sum=0;

        int ele;
        for(int i=1;i<=n;i++)
        {
           cin>>ele;
           another_sum+=ele;
        }
        if(sum == another_sum)
        {
            cout<<"YES"<<"\n";
        }
        else
        {
            cout<<"NO"<<"\n";
        }
    return 0;
}