#include<bits/stdc++.h>
using namespace std;
bool visited[1001];
vector<int> v[10001];
void BSF(int n){
    queue<int> q;
    q.push(n);
    visited[n]=true;
    while(!q.empty()){
        int x=q.front(); q.pop();
        cout << x<<" ";
        for(auto i:v[x]){
            if(!visited[i]){
                visited[i]=true;
                q.push(i);
            }
        }
    }
}
int main(){
    int n,m,k; cin >> n >> m >> k;
    while(m--){
        int x,y; cin >> x >> y;
        v[x].push_back(y);
    }
    for(int i=1;i<=n;i++){
        sort(v[i].begin(),v[i].end());
    }
    BSF(k);
}
