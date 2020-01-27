    #include<iostream>
    using namespace std;
    int main()
    {
        ios_base::sync_with_stdio(false);
        cin.tie(nullptr);
        cout.tie(nullptr);

        freopen("input.txt","r",stdin);
        //freopen("output.txt","w",stdout);


        int p;
        cin>>p;

        string s,t;
        while (p--)
        {
          cin>>s;
          cin>>t;    
          int prev=-1;
          bool flag=false;
          int size1,size2;
          string min_string;
          string max_string;
          //bool char_array[s.size()]={false};
          if(s.size() > t.size())
          {
            min_string = t;
            max_string = s;
          }
          else
          {
              min_string = s;
              max_string = t;
          }
             for(int i=0;i<min(s.size(),t.size());i++)
            {
            flag=false;
            for(int j=prev+1;j<max(s.size(),t.size());j++)
            {
                if( min_string[i] == max_string[j])
                {
                    flag=true;
                    //char_array[i]=true;
                    prev=j;
                    break;
                }
            }
            if(!flag)
            {
                break;
            }  
         }
        if(flag)
        {
            cout<<"YES"<<endl;
        }   
        else
        {
            cout<<"NO"<<endl;
        }
        }
        return 0;
    }