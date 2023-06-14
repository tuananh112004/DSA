#include<bits/stdc++.h>
using namespace std;
vector<int> v[1001];
int n;
bool visited[1001];
void DFS(int k){
    visited[k]=true;
    for(auto x:v[k]){
        if(!visited[x]){
                    visited[x]=true;
        DFS(x);
        }

    }
}
int count(){
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
    int m; cin >> n >> m;
    while(m--){
        int x,y; cin >> x >> y;
        v[x].push_back(y);
        v[y].push_back(x);
    }
    int cnt=0;
    int cc=count();
    for(int i=1;i<=n;i++){
        memset(visited,false,sizeof(visited));
        visited[i]=true;
        if(cc<count()){
            cnt++;
        }
    }
    cout << cnt;
}
