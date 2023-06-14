#include<bits/stdc++.h>
using namespace std;
bool visited[1001];
vector<int> v[1001];
void DFS(int n){
    cout << n <<" ";
    visited[n]=true;
    for(auto x:v[n]){
        if(!visited[x]){
            DFS(x);
        }
    }
}
int main(){
    int n,m,s; cin >> n >> m >> s;
    for(int i=1;i<=m;i++){
        int x,y; cin >> x >> y;
        v[x].push_back(y);
        v[y].push_back(x);
    }
    for(int i=1;i<=n;i++){
        sort(v[i].begin(),v[i].end());
    }
    DFS(s);
}
