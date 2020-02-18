#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    int i,j,c=1;
	   string s;
	   cin>>s;
	   int l=s.size();
	   
	   
	       for(i=0;i<l/2;++i)
	       {
	           	if(s[i] != s[l-i-1] && (s[i] !='?' && s[l-i-1]!='?'))
	           	{c =0;
	           	break;}
			else if(s[i] == s[l-i-1] && (s[i] =='?' && s[l-i-1]=='?'))
			{c*=26;
			c %= 10000009;
		    }					
		}
		if(s[l/2]=='?' && l%2!=0)
		{c*=26;
		    c %= 10000009;
		}
		
	       
	       cout<<(c%10000009)<<endl;
	   
	   
	}
	return 0;
}
