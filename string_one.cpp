#include <bits/stdc++.h>
using namespace std;
int main() {
	long long t;
	cin>>t;
	while(t--)
	{
	    long long n,dif;
	    cin>>n;
	    long long a[n];
	    string ans="";//This is important in this the concatenation of the string to one another
	    
	    for(long long i=0;i<n;i++)
	    {
	        cin>>a[i];
	    }
	    long long counter=1;
	    for(long long i=1;i<n;i++)
	    {
	       dif=a[i]-a[i-1];
	       if(dif==1)
	       counter++;
	       else
	       {
	           if(counter>2)
	           {
	               ans+=to_string(a[i-counter]);//to_string is the method to convert the number into the string
	           
	               ans+="...";//by just using the concatenation operator +
	               
	               ans+=to_string(a[i-1])+",";
	           
	               
	           }
	           else if(counter==2)
	           {
	               ans+=to_string(a[i-2])+",";
	               ans+=to_string(a[i-1])+",";
	           }
	           else if(counter==1)
	           {
	               //ans+=a[i-2];
	           
	               ans+=to_string(a[i-1])+",";
	           }
	           counter=1;
	       }
	    }
	    if(counter==1)
	    {
	      ans+=to_string(a[n-1]);
	    }
	    if(counter>2)
	           {
	               ans+=to_string(a[n-counter]);
	           
	               ans+="...";
	               
	               ans+=to_string(a[n-1]);
	           }
	  if(counter==2)
	           {
	               ans+=to_string(a[n-2])+",";
	               ans+=to_string(a[n-1]);
	           }
	    cout<<ans;
	    cout<<"\n";
	    
	}
	return 0;
}
