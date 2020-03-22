#include<iostream>
using namespace std;
int check(char ch)
{
    if(ch=='L' || ch=='R')
    {
        return 1;
    }
    else
    {
        return 2;
    }
}
void do_the_work(int& x,int& y,char ch)
{
    if(ch=='L')
    {
        x=x-1;
        y=y;
    }
    if(ch=='R')
    {
       x=x+1;
       y=y;  
    }
    if(ch=='U')
    {
          x=x;
          y=y+1;
    }
    if(ch=='D')
    { 
          x=x;
          y=y-1;
    }
}
int main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);


    freopen("input.txt","r",stdin);
    int t;
    cin>>t;

    int n ;
    while(t--)
    {
        cin>>n;
        string s;
        cin>>s;

        int x=0;
        int y=0;
        int state=check(s[0]);
        for(int i=0;i<n;i++)
        {
            if(i==0)
            {
                do_the_work(x,y,s[i]); 
            }
            else
            {
                if(check(s[i]) == state)
                {
                    continue;
                } 
                else
                {
                    do_the_work(x,y,s[i]);
                    state=check(s[i]);
                }  
            }
        }
    cout<<x<<" "<<y<<"\n";
    }
    return 0;
}