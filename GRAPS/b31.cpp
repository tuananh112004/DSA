#include<bits/stdc++.h>
using namespace std;
int n;
vector<int> v[1001];
bool visited[1001];
int ans=0;
int DFS(int u){
    int res=1;
    visited[u]=true;
    for(auto x:v[u]){
        if(!visited[x]){
            res+=DFS(x);
        }
    }
    ans+=res;
    return res;
}
int main(){
    cin >> n ;
    for(int i=0;i<n-1;i++){
        int x,y; cin >> x >> y;
        v[x].push_back(y);
        v[y].push_back(x);
    }
    DFS(1);
    cout << ans;
    
}
