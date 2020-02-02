#include<iostream>
#include<algorithm>
using namespace std;
struct Student
{
    string name;
    int id;
    int ds;
    int alg;
    int os;
    int total;
};
bool comp(Student a,Student b)
{
    if(a.total != b.total)
    {
        return (a.total > b.total);
    }
    return (a.id < b.id);
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    freopen("input.txt","r",stdin);
    //freopen("output.txt","")
    int n;
    cin>>n;
    string name;
    int a,b,c;
    struct Student obj[n];
    for(int i=0;i<n;i++)
    {
         obj[i].id=i+1;
         
         cin>>name;
         obj[i].name=name;
         
         cin>>a;
         obj[i].ds=a;
         
         cin>>b;
         obj[i].alg=b;
         
         cin>>c;
         obj[i].os=c;
         obj[i].total=a+b+c;
    } 
   /*for(int i=0;i<n;i++)
    {
        cout<<(i+1)<<" "<<obj[i].name<<" "<<obj[i].total<<"\n";
    }
    */    
    sort( obj , obj+n , comp);
    for(int i=0;i<n;i++)
    {
        cout<<(i+1)<<" "<<obj[i].name<<"\n";
    }
    
    return 0;
}