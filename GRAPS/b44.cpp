#include<bits/stdc++.h>
using namespace std;
vector<pair<int,int>> v[1001];
int n,m,s;
void nhap(){
    cin >> n >> m >> s;
    for(int i=0;i<m;i++){
        int x,y,w; cin >> x >> y >> w;
        v[x].push_back({y,w});
        v[y].push_back({x,w});
    }
}
void Dijstra(int s){
    vector<int> d(n+1,1e7);
    d[s]=0;
    priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>> q;
    q.push({0,s});
    while(!q.empty()){
        pair<int,int> it=q.top();q.pop();
        int u=it.second, kc=it.first;
        if(kc>d[u]) continue;
        for(auto x:v[u]){
            int v=x.first, w=x.second;
            if(d[v]>d[u]+w){
                d[v]=d[u]+w;
                q.push({d[v],v});
            }
        }
    }
    for(int i=1;i<=n;i++) cout << d[i] <<" ";
}
int main(){
    nhap();
    Dijstra(s);
}
