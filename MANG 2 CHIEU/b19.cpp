#include<bits/stdc++.h>
using namespace std;
long long f[105][105];
long long a[105][105];
int main(){
    int n,m; cin >> n >>m;
    
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            cin >> a[i][j];
        }
    }
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            f[i][j]=max(f[i-1][j],f[i][j-1])+a[i][j];
        }
    }
    cout << f[n][m];
}
