#include<bits/stdc++.h>
using namespace std;
bool visited[1001];
vector<int> v[10001];
int parent[10001];
void DFS(int n){
    visited[n]=true;
    for(auto x:v[n]){
        if(!visited[x]){
            visited[x]=true;
            DFS(x);
            parent[x]=n;
        }
    }
}
int main(){
    int n,m,s,t; cin >> n >> m >> s >> t;
    while(m--){
        int x,y; cin >> x >> y;
        v[x].push_back(y);
    }
    for(int i=1;i<+n;i++){
        sort(v[i].begin(),v[i].end());
    }
    DFS(s);
    if(!visited[t]){
        cout <<"-1\n";
    }
    else{
        vector<int> res;
        while(t!=s){
            res.push_back(t);
            t=parent[t];
        }
        res.push_back(t);
        reverse(res.begin(),res.end());
        for(auto x:res) cout << x << " ";
    }
}
