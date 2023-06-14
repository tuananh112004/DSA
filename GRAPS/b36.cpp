#include<bits/stdc++.h>
using namespace std;
int n,m;
bool visited[1001];
int parent[1001];
vector<int> v[1001];
int cnt=0;
void DFS(int u){
    visited[u]=true;
    cnt++;
    for(auto x:v[u]){
        if(!visited[x]){
            DFS(x);
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
    int dem=0;
    for(int i=1;i<=n;i++){
        memset(visited,false,sizeof(visited));
        cnt=0;
        visited[i]=true;
        if(i==1) DFS(2);
        else DFS(1);
        if(cnt!=n-1) dem++;
    }
    cout << dem;
}
