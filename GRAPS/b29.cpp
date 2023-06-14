#include<bits/stdc++.h>
using namespace std;
int n,m;
vector<int> v[10001];
int color[10001];
int ok=1;
void DFS(int u){
    if(!ok) return;
    for(auto x:v[u]){
        if(color[x]==0){
            color[x]=3-color[u];
            DFS(x);
        }
        else if(color[u]==color[x]){
            ok=0;
            return;
        }
    }
}
int main(){
    cin >> n >> m;
    for(int i=0;i<m;i++){
        int x,y; cin >> x >> y;
        v[x].push_back(y);
        v[y].push_back(x);
    }
    for(int i=1;i<=n;i++){
        if(!color[i]){
            color[i]=1;
            DFS(i);
        }
    }
    if(ok) cout <<"YES";
    else cout <<"N0";
}
