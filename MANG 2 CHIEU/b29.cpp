#include<bits/stdc++.h>
using namespace std;
int n;
int a[100][100];
int dx[4]={-1,-1,1,1};
int dy[4]={-1,1,-1,1};
int dem=0;
void loang(int i, int j){
    dem++;
    a[i][j]=1;
    for(int k=0;k<4;k++ ){
        int i1=i+dx[k];
        int j1=j+dy[k];
        if(i1>=1&&i1<=n&&j1>=1&&j1<=n&&a[i1][j1]==0){
            
            loang(i1,j1);
            
        }
    }
}
int main(){
    cin >> n;
    int s,t; cin >> s >> t;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            
            cin >> a[i][j];
        }
    }
     loang(s,t);
     cout << dem;
}
