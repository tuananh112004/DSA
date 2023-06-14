#include<bits/stdc++.h>
using namespace std;
int n,m;
set<int> se[10001];
vector<pair<int,int>> p;
bool visited[1001];
void nhap(){
    cin >> n >> m;
    while(m--){
        int x,y; cin >> x >> y;
        se[x].insert(y);
        se[y].insert(x);
        p.push_back({x,y});
    }
}
void DFS(int n){
    visited[n]=true;
    for(auto x:se[n]){
        if(!visited[x]){
            DFS(x);
        }
    }
}
int tplt(){
    int dem=0;
    for(int i=1;i<=n;i++){
        if(!visited[i]){
            dem++;
            DFS(i);
        }
    }
    return dem;
}
int main(){
    nhap();
    int cc=tplt();
    int dem=0;
    for(auto t:p){
        int x=t.first, y=t.second;
        se[x].erase(y);
        se[y].erase(x);
        memset(visited,false,sizeof(visited));
        if(cc<tplt()){
            dem++;
        }
        se[x].insert(y);
        se[y].insert(x);
    }
    cout << dem << endl;   
}
