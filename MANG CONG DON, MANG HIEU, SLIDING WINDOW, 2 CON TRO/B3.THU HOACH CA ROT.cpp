#include<bits/stdc++.h>
using namespace std;
int f[1007][1007];
int main(){
    int n,m; cin >> n>>m;
    int a[n][m];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin >> a[i][j];
            f[i][j]=f[i][j-1]+a[i][j];
        }
    }
    int q;
    cin >> q;
    while(q--){
        int h1,h2,c1,c2;
        cin >> h1 >> h2 >> c1 >> c2;
        int tong=0;
        h1--;
        h2--;
        c1--;
        c2--;
        for(int i=h1;i<=h2;i++){
                tong+=(f[i][c2]-f[i][c1-1]);
            }
            cout << tong <<endl;
        }
}
