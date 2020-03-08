    #include<iostream>
    #include<algorithm>
    using namespace std;
    int gcd(int a,int b)
    {
        if(b==0)
        return a;
        else
        {
            return gcd(b,a%b);
        }
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
        while(t--)
        {
            int n;
            cin>>n;
            int arr[n]={0};
            int ans;
            for(int i=0;i<n;i++)
            {
                cin>>arr[i];
            }
            ans=arr[0];
            for(int i=1;i<n;i++)
            {
                ans=__gcd(ans,arr[i]);
                if(ans == 1)
                {
                    break;
               }
            }
            if(ans==1)
            {
                cout<<-1<<"\n";
            }
            else
            { 
            for(int i=2;i*i<ans;i++)
            {
                if(ans%i == 0)
                {
                    ans=i;
                    break;
                }
            }
            cout<<ans<<"\n";
            }
        }
        return 0;
    }