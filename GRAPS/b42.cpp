#include<bits/stdc++.h>
using namespace std;
int n,m;
bool visited[100001];
int parent[100001],sz[100001];
vector<int> v[100001];
int max_sz=0;
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
    max_sz=max({max_sz,sz[x],sz[y]});
    return true;
}
int main(){
    cin >> n >> m;
    int tmp=n;
    ktao();
    for(int i=1;i<=m;i++){
        int x,y; cin >> x >> y;
        if(Union(x,y)){
            tmp--;
        }
        cout << tmp <<" "<< max_sz << endl;
    }
}
