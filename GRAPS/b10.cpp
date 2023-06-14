#include<bits/stdc++.h>
using namespace std;
bool visited[1001];
vector<int> v[1001];
void BFS(int n){
    queue<int> q;
    q.push(n);
    visited[n]=true;
    while(!q.empty()){
        int x=q.front(); q.pop();
        cout << x <<" ";
        for(auto k:v[x]){
            if(!visited[k]){
                q.push(k);
                visited[k]=true;
            }
        }
    }
}
int main(){    
    int n,m,z; cin >> n >> m>> z;
    while(m--){
        int x,y;
        cin >> x >> y;
        v[x].push_back(y);
        v[y].push_back(x);
    }
    for(int i=1;i<=n;i++){
        sort(v[i].begin(),v[i].end());
    }
    BFS(z);
}
