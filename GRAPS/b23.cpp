#include<bits/stdc++.h>
using namespace std;
vector<int> v[10001];
bool visited[1001];
int dem=0;
void DFS(int u){
    dem++;
    visited[u]=true;
    for(auto x:v[u]){
        if(!visited[x]){
            DFS(x);
        }
    }
    
}
int main(){
    int n,m; cin >> n >> m;
    while(m--){
        int x,y; cin >> x >> y;
        v[x].push_back(y);
    }    
    for(int i=1;i<=n;i++){
        dem=0;
        memset(visited,false,sizeof(visited));
        DFS(i);
        if(dem!=n){
            cout <<"0";
            return 0;
        }
    }
    cout <<"1";
}
