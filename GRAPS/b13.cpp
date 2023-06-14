#include<bits/stdc++.h>
using namespace std;
int dem=0;
    int n,m;
bool visited[1001];
vector<int> v[10001];
void DFS(int n){
    visited[n]=true;
    for(auto x:v[n]){
        if(!visited[x]){
            DFS(x);
        }
    }
}
int dem1(){
    for(int i=1;i<=n;i++){
        if(!visited[i]){
            dem++;
            DFS(i);
        }
    }
    return dem;
}
int main(){
 cin >> n >> m;
    while(m--){
        int x,y; cin >> x >> y;
        v[x].push_back(y);
        v[y].push_back(x);
    }
    dem1();
    cout << dem;
}
