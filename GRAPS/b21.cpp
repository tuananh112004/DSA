#include<bits/stdc++.h>
using namespace std;
int n,m;
vector<int> v[1001];
bool visited[1001];
int parent[1001];
void nhap(){
    cin >> n >> m;
    while(m--){
        int x,y; cin >> x >> y;
        v[x].push_back(y);
        v[y].push_back(x);
    }
    for(int i=1;i<=n;i++){
        sort(v[i].begin(),v[i].end());
    }
}
bool DFS(int n){
    visited[n]=true;
    for(auto x:v[n]){
        if(!visited[x]){
            parent[x]=n;
            if(DFS(x)) return true;
        }
        else if(x!=parent[n]){
            return true;
        }
    }
    return false;
}
int main(){
    nhap();
    for(int i=1;i<=n;i++){
        if(!visited[i]){
            if(DFS(i)){
                cout <<"1\n";
                return 0;
            }
        }
    }
    cout <<"0";
}
