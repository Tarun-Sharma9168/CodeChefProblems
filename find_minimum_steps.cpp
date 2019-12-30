#include<iostream>
#include<cmath>
#include<algorithm>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);   
    //freopen("input.txt","r",stdin);
    int n;
    int m;
    int a;
    int first1;
    int second1;
    int first2;
    int second2;
        cin>>n>>m;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                 cin>>a;
                 if(a==1)
                 {
                       first1=i;
                       second1=j;
                 }
                 if(a==2)
                 {   
                       first2=i;
                       second2=j;  
                 }
            }
        }
        cout<<(abs(first1-first2)+abs(second1-second2))<<"\n";
    return 0;
}