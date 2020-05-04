/*
Author Name:Tarun Sharma
Problem Name:Isolation Centres
*/
		#include<bits/stdc++.h>
		using namespace std;
		int main()
		{
				    ios_base::sync_with_stdio(false);
				    cin.tie(nullptr);
				    cout.tie(nullptr);

				    freopen("input.txt","r",stdin);
				    //freopen("output.txt","w",stdout);
		   		   long long int t;
				    cin>>t;
                    long long int n,q;
                    string s; 
				    while(t--)
				    {

                        //int n;
                        cin>>n;
                        //int q;
                        cin>>q;
                        //string s;
                        cin>>s;
                        unordered_map<char,int> mp;
                        for(auto x:s)
                        {
                            mp[x]++;
                        }
                        long long int sum=0;
                        long long int c;
                        for(int i=0;i<q;i++)
                        {
                            sum=0;
                            cin>>c;
                            for(auto it=mp.begin();it!=mp.end();it++)
                            {
                                if(it->second > c)
                                {
                                    sum+=(it->second - c);
                                }
                            }
                            cout<<sum<<"\n";
                        }
				    }
				    return 0;
		}