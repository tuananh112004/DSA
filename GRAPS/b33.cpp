#include<bits/stdc++.h>
using namespace std;
int n,m;
bool visited[10001];
vector<int> v[10001];
int cnt=0;
void DFS(int u){
    cnt++;
    visited[u]=true;
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
        if(!visited[i]){
            cnt=0;
            DFS(i);
            dem+=cnt*(cnt-1)/2;
        }
    }
    if(dem==m){
        cout <<"YES";
    }
    else cout <<"NO";
}
