#include<iostream>
#include<cmath>
using namespace std;
int count_Number_Set_Bits(int n)
{
    int count=0;
    while(n > 0)
    {
        n= n & (n-1);
        count++;
    }
    return count;
}
int main()
{
        ios_base::sync_with_stdio(false);
        cin.tie(nullptr);
        cout.tie(nullptr);
        freopen("input.txt","r",stdin);
        //freopen("output.txt","w",stdout);
    int t;
    cin>>t;
    int N,A,B;
    while(t--)
    {
       
          cin>>N>>A>>B;
          int first_A=count_Number_Set_Bits(A);
          int first_B=count_Number_Set_Bits(B);
          int zero_B = N-first_B;
          int zero_A = N-first_A;
          
          int sum=0;
          sum+=min(first_A,zero_B);

          sum+=min(first_B,zero_A);

          int p=N-1;
          int new_sum=0;
          for(int i=sum;i>0;i--)
          {
              new_sum+=pow(2,p);
              p--;
          }
    cout<<new_sum<<"\n";
    }
    return 0;
}