#include<bits/stdc++.h>
using namespace std;
bool visited[1001];
vector<int> v[1001];
int parent[1001];
void BFS(int n){
    queue<int> q;
    q.push(n);
    visited[n]=true;
    while(!q.empty()){
        int x=q.front();q.pop();
        for(auto k:v[x]){
            if(!visited[k]){
                q.push(k);
                parent[k]=x;
                visited[k]=true;
            }
        }
    }
}
int main(){
    int n,m,s,t; cin >> n >> m >> s >> t;
    while(m--){
        int x,y; cin >> x >> y;
        v[x].push_back(y);
        v[y].push_back(x);
    }    
    for(int i=1;i<=n;i++){
        sort(v[i].begin(),v[i].end());
    }
    BFS(s);
    if(!visited[t]){
        cout <<"-1\n";
    }
    else{
        vector<int> res;
        while(s!=t){
            res.push_back(t);
            t=parent[t];
        }
        res.push_back(t);
        reverse(res.begin(),res.end());
        for(auto x:res) cout << x <<" ";
    }
}
