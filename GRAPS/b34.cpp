#include<bits/stdc++.h>
using namespace std;
vector<int> v[10001];
int dd[100001];
bool visited[10001];
int n,m,k;
void DFS(int u){
    visited[u]=true;
    dd[u]++;
    for(auto x:v[u]){
        if(!visited[x]){
            DFS(x);
        }
    }
}

int main(){
    cin >> k>> n >> m;
    vector<int> ng;
    for(int i=0;i<k;i++){
        int ng1; cin >> ng1;
        ng.push_back(ng1);
    }
    for(int i=1;i<=m;i++){
        int x,y; cin >> x >> y;
        v[x].push_back(y);
    }
    for(auto it : ng){
        memset(visited,false,sizeof(visited));
        DFS(it);
    }
    int dem=0;
    for(int i=1;i<=n;i++){
        if(dd[i]==k){
            dem++;
        }
    }
    cout << dem;
}
