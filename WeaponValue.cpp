#include<iostream>
#include<cstring>
#include<algorithm>
using namespace std;
int count_ones(string s)
{
    int i=0;
    int count=0;
    while(i<10){
    if(s[i] == '1')
    {
         count++;
    }
    i++;
    }
    return count;
}
int main()
{
    int t;
    cin>>t;
    int N;
    string s;
    while(t--)
    {
        cin>>N;
        int size=N;
        string string_arr[N];
        int i=0;
        while(N--)
        {
            cin>>s;
            string_arr[i]=s;
            i++;
        }
        for(int t=0;t<size-1;t++)
        {
            int j=0;
            while(j<10)
            {
                if(string_arr[t][j] == string_arr[t+1][j])
                {
                    string_arr[t+1][j] = '0';
                }
                else
                {
                    string_arr[t+1][j] = '1';
                }
                //cout<<string_arr[t]<<"\n;"
                j++;
            }
            //cout<<string_arr[t+1]<<"\n";
        }
        //cout<<string_arr[size-2]<<"\n";
        //cout<<string_arr[size-1]<<"\n";
        cout<<count_ones(string_arr[size-1])<<"\n";
    }
    return 0;
}