#include<bits/stdc++.h>
using namespace std;
int n,m;
int a[510][510];
int d[510][510];
int dx[]={-1,0,0,1};
int dy[]={0,-1,1,0};
int main(){
    cin >> n >> m;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            cin >> a[i][j];
        }
    }
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            d[i][j]=1e9;
        }
    }
    d[1][1]=a[1][1];
    priority_queue<pair<int,pair<int,int>>,vector<pair<int,pair<int,int>>>,greater<pair<int,pair<int,int>>>> q;
    q.push({a[1][1],{1,1}});
    while(!q.empty()){
        auto top=q.top();q.pop();
        int i=top.second.first, j=top.second.second;
        int len=top.first;
        if(len>d[i][j]) continue;
        for(int k=0;k<4;k++){
            int i1=i+dx[k], j1=j+dy[k];
            if(d[i1][j1]>d[i][j]+a[i1][j1]){
                d[i1][j1]=d[i][j]+a[i1][j1];
                q.push({d[i1][j1],{i1,j1}});
            }
        }
    }
    cout << d[n][m];
}

