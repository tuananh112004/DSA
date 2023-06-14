#include<bits/stdc++.h>
using namespace std;
bool visited[1001];
int id[1001];
vector<int> v[10001];
int dem=0;
void BFS(int n){
    queue<int> q;
    q.push(n);
    visited[n]=true;
    while(!q.empty()){
        int x=q.front(); q.pop();
        id[x]=dem;
        for(auto i:v[x]){
            if(!visited[i]){
                visited[i]=true;
                q.push(i);
            }
        }
    }
}
int main(){
    int n,m; cin >> n >> m;
    while(m--){
        int x,y; cin >> x >> y;
        v[x].push_back(y);
        v[y].push_back(x);
    }
    for(int i=1;i<=n;i++){
        sort(v[i].begin(),v[i].end());
    }
    for(int j=1;j<=n;j++){
        if(!visited[j]){
            dem++;
            BFS(j);
        }
    }
    int q; cin >> q;
    while(q--){
        int x,y; cin >> x >> y;
        if(id[x]==id[y]){
            cout <<"1\n";
        }
        else{
            cout <<"-1\n";
        }
    }
}
