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
    int k=m;
    while(k--){
        int x,y; cin >> x >> y;
        v[x].push_back(y);
        v[y].push_back(x);
    }    
    DFS(1);
    if(dem==n&&m==n-1){
        cout <<"1";
    }
    else{
        cout <<"0";
    }
}
