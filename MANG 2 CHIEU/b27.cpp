#include<bits/stdc++.h>
using namespace std;
long long a[100][100];
long long f[100][100];
int main(){
    int n; cin >> n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            cin >> a[i][j];
        }
    }
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            f[j][i]=max(f[j-1][i-1],max(f[j][i-1],f[j+1][i-1]))+a[j][i];
        }
    }
    long long tmp=-1e9;
    for(int i=1;i<=n;i++){
        tmp=max(tmp,f[i][n]);
    }
    cout << tmp;
}
