#include<bits/stdc++.h>
using namespace std;
bool visited[100001];
int parent[100001],sz[100001];
int n,m; 
struct edge{
    int x,y,w;
};
vector<edge> edges;
void ktao(){
    for(int i=1;i<=n;i++){
        parent[i]=i;
        sz[i]=1;
    }
}
int find(int u){
    if(u==parent[u]) return u;
    return parent[u]=find(parent[u]);
}
bool Union(int x, int y){
    x=find(x);
    y=find(y);
    if(x==y) return false;
    if(sz[x]>sz[y]){
        parent[y]=x;
        sz[x]+=sz[y];
    }
    else{
        parent[x]=y;
        sz[y]+=sz[x];
    }
    return true;
}
void nhap(){
    cin >> n >> m;
    for(int i=0;i<m;i++){
        int x,y,w; cin >> x >> y >>w;
        edge e{x,y,w};
        edges.push_back(e);
    }
}
void Kruskal(){
    sort(edges.begin(),edges.end(),[](edge a, edge b)->bool{
        return a.w<b.w;
    });
    long long d=0;
    vector<edge> MST;
    for(int i=0;i<m;i++){
        if(MST.size()==n-1) break;
        edge e= edges[i];
        if(Union(e.x,e.y)){
            MST.push_back(e);
            d+=e.w;
        }
    }
   if(MST.size()<n-1){
       cout <<"IMPOSSIBLE";
   }
   else cout <<d;
//    for(auto it:MST){
//        cout << it.x << " ";
//    }
}
int main(){
    nhap();
    ktao();
    Kruskal();
}
