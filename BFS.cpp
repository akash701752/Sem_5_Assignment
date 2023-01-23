#include<iostream>
#include<vector>
using namespace std ;
void bfs(vector<vector<int> > &adj)
{
    int n = adj.size() ;
    vector<bool> vis(n,false) ;
    int queue[100] ;
    int front , rear ;
    front = rear = 0 ;
    queue[rear] = 0 ;
    rear++ ;
    int completed = 1 ;
    cout<<"BFS : " ;
    vis[0] = true ;
    while(front!=rear)
    {
        int ver = queue[front] ;
        front ++ ;
        cout<<ver <<" ";
        for(int i=0;i<adj[ver].size();i++){
            if(vis[adj[ver][i]]==false){
                queue[rear++] = adj[ver][i] ;
                vis[adj[ver][i]] = true ;
                completed++ ;
            }
        }
    }
}
int main() 
{
    int n , i , j , edges , u  , v ;
    cout<<"Enter No. of Vertices " ;
    cin>>n ;
    cout<<"Enter No. of Edges " ;
    cin>>edges ;
    vector< vector<int> > adj(n) ;
    cout<<"Enter U and V "<<endl ;
    for(i=0;i<edges;i++){
        cin>>u>>v ;
        adj[u].push_back(v) ;
        // adj[v].push_back(u) ;
    }
    cout<<"Graph is "<<endl ;
    for(i=0;i<n;i++){
        cout<<i << "->";
        for(j=0;j<adj[i].size();j++){
            cout<<adj[i][j] <<" ";
        }
        cout<<endl ;
    }
    bfs(adj);
    return 0 ;
}