#include<bits/stdc++.h>
using namespace std;
int n;
bool visited[1001];
int parent[1001];
vector<int> v[1001];

void DFS(int u){
    visited[u]=true;
    for(auto x:v[u]){
        if(!visited[x]){
            parent[x]=parent[u]+1;
            DFS(x);
        }
    }
}

 
int main(){
    cin >> n;
    for(int i=0;i<n-1;i++){
        int x,y; cin >> x >> y;
        v[x].push_back(y);
        v[y].push_back(x);
    }
    parent[1]=0; 
    DFS(1);
    for(int i=1;i<=n;i++){
        cout <<parent[i] <<" ";
    }
}
