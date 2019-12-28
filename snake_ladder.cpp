//Bfs is the only approach so don't worry slowly slowly you are familiar with this codes
//As when the edges are unweighted and you are talking about shortest path so bfs is the only way

#include<iostream>
#include<queue>
#include<algorithm>
using namespace std;
int min_distance(int *board)
{
    int dist[100];
    for(int i=0;i<100;i++)
    {
        dist[i]=INT16_MAX;
    }
    dist[1]=0;
    queue<int> q;
    q.push(1);
    while(1)
    {
        int front = q.front();
        if(front == 30)
        break;
    
    q.pop();
    for(int i=front+1;i<=front+6 && i<=30;i++)
    {
        if(board[i] == 0)
        {
            dist[i] = min(dist[i],dist[front]+1);
            q.push(i);
        }
        else
        {
            dist[board[i]]=min(dist[board[i]],dist[front]+1);
            q.push(board[i]);
        }
    }
}
return dist[30];
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int board[100];
        //this is for the snakes and ladders that are there means where ladders take you to
        //and where snakes take you to the block
        for(int i=0;i<100;i++)
        {
            board[i]=0;
        }
        int a,b;
        for(int i=0;i<n;i++)
        {
            cin>>a>>b;
            board[a]=b;
        }
        cout<<min_distance(board)<<"\n";
    }
    return 0;
}