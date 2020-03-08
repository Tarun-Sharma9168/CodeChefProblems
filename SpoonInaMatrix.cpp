#include<iostream>
#include<bits/stdc++.h>
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
        int r,c;
        cin>>r>>c;

        string arr[r];
        for(int i=0;i<r;i++)
        {
           cin>>arr[i];
        }
        bool flag=false;
       /* for(int i=0;i<r;i++)
        {
           for(int j=0;j<c;j++)
           {
               cout<<arr[i][j]<<" ";
           }
           cout<<"\n";
        }
*/
        for(int i=0;i<r;i++)
        {
            for(int j=0;j<=c-5;j++)
            {
                  if( (arr[i][j] == 's' || arr[i][j] == 'S') &&  (arr[i][j+1] =='P' || arr[i][j+1] =='p')  &&  (arr[i][j+2] == 'O' || arr[i][j+2] == 'o')  &&  (arr[i][j+3] == 'O'|| arr[i][j+3] == 'o')  &&  (arr[i][j+4] == 'N' || arr[i][j+4] == 'n'))
                  {
                       //cout<<"RAMU"<<"\n";
                       flag=true;
                       break;
                  }
            }
            if(flag)
            {
                break;
            }
        }
        if(flag)
        {
            cout<<"There is a spoon!"<<"\n";
        }
        else
        {
            for(int i=0;i<=r-5;i++)
            {
              for(int j=0;j<c;j++)
              {
                 if((arr[i][j]=='s'|| arr[i][j]=='S') &&  (arr[i+1][j]=='P'||arr[i+1][j]=='p')  &&  (arr[i+2][j]=='O'||arr[i+2][j]=='o')  &&  (arr[i+3][j]=='O'||arr[i+3][j]=='o')  &&  (arr[i+4][j]=='N'||arr[i+4][j]=='n'))
                 {
                       flag=true;
                       break;
                 }
              }
              if(flag)
              {
                  break;
              }
            }
            if(flag)
            {
                cout<<"There is a spoon!"<<"\n";
            }
            else
            {
                cout<<"There is indeed no spoon!"<<"\n";
            }
        }

    }
    return 0;
}