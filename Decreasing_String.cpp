#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    
    freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);

    long long t;
    long long n,n1,n2,j;
    cin>>t;
	while(t--){
	    cin>>n;
	    string s="",s1="";
	    n1=n/25;
	    n2=n%25;
	    char c;
	    while(n1--){
	        s=s+"zyxwvutsrqponmlkjihgfedcba";
	        
	    }
	    if(n2!=0){
	        for(j=97+n2;j>=97;j--){
	            c=j;
	            s1=s1+c;
	        }
	    }
	    s=s1+s;
	    cout<<s<<endl;
	}
	return 0;
}
