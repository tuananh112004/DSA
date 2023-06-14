#include<bits/stdc++.h>
using namespace std;
int n,s1,s2,t1,t2;
int a[1001][1001];
int dx[8]={-1,-1,-1,0,0,1,1,1};
int dy[8]={-1,0,1,-1,1,-1,0,1};
int BFS(){
    queue<pair<pair<int,int>,int>> q;
    q.push({{s1,s2},0});
    a[s1][s2]=0;
    while(!q.empty()){
        auto it=q.front();q.pop();
        int i=it.first.first, j=it.first.second, d=it.second;
        if(i==t1&&j==t2){
            return d;
        }
        for(int k=0;k<8;k++){
            int i1=i+dx[k],j1=j+dy[k];
            if(i1>=1&&i1<+n&&j1>=1&&j1<=n&&a[i1][j1]==1){
                q.push({{i1,j1},d+1});
                a[i1][j1]=0;
            }
        }
    }
    return -1;
}
int main(){
    cin >> n >> s1 >> s2 >> t1 >> t2;
    for(int i=1;i<=n;i++)
        for(int j=1;j<=n;j++)
            cin >> a[i][j];
    cout << BFS();        
            
}
//3 
//1 1 3 3
//1 0 0
//1 0 0
//0 0 1
