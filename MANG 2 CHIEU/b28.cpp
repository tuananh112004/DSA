#include<bits/stdc++.h>
using namespace std;
int n;
long long a[105][105];

int dx[8]={-1,-1,-1,0,0,1,1,1};
int dy[8]={-1,0,1,-1,1,-1,0,1}; 
long long ans;
long long loang(int i, int j){
    for(int k=0;k<8;k++){
        int i1=i+dx[k];
        int j1=j+dy[k];
        if(i1>=1&&i1<=n&&j1>=1&&j1<=n){
            ans+=a[i1][j1];
        }
    }
    return ans;
}
int main(){
    cin >> n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            cin >> a[i][j];
        }
    }
    long long maxx=0;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            ans=0;
            maxx=max((loang(i,j)+a[i][j]),maxx);
            
        }
    }
    cout << maxx;
}
