#include<bits/stdc++.h>
using namespace std;
int n,m;
vector<int> v[1001];
bool visited[1001];
int dem=0;
void DFS(int u){
    visited[u]=true;
    dem++;
    for(auto x:v[u]){
        if(!visited[x]){
            DFS(x);
        }
    }
}
int main(){
    cin >> n >> m;
    while(m--){
        int x,y;cin >> x >> y;
        v[x].push_back(y);
        v[y].push_back(x);
    }
    int ans=0;
    for(int i=1;i<=n;i++){
        if(!visited[i]){
            dem=0;
            DFS(i);
            ans=max(ans,dem);
        }
    }
    cout << ans;
}
