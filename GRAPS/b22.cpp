#include<bits/stdc++.h>
using namespace std;
int color[10001];
vector<int> v[1001];
int n,m;
void nhap(){
    cin >> n >> m;
    while(m--){
        int x,y; cin >> x >> y;
        v[x].push_back(y);
    }
    for(int i=1;i<=n;i++) sort(v[i].begin(),v[i].end());
}
bool DFS(int u){
    color[u]=1;
    for(auto x:v[u]){
        if(color[x]==0){
            if(DFS(x)) return true;
        }
        else if(color[x]==1) return true;
    }
    color[u]=2;
    return false;
}
int main(){
    nhap();
    for(int i=1;i<=n;i++){
        if(color[i]==0){
            if(DFS(i)){
                cout <<"1\n";
                return 0;
            }
        }
    }
    cout <<"0";
}
