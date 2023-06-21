#include<bits/stdc++.h>
using namespace std;
int f[1000][1000];
int main(){
    int n,m; cin >> n >>m;
    int a[n+1][m+1];
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            cin >> a[i][j];
        }
    }
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            f[i][j]=max(f[i-1][j],max(f[i][j-1],f[i-1][j-1]))+a[i][j];
        }
    }
    cout << f[n][m];
}
