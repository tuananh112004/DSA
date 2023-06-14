#include<bits/stdc++.h>
using namespace std;
int n,m; int a[1000][1000];
int main(){
    cin >> n >>m;
    while(m--){
        int x,y; cin >> x >> y;
        a[x][y]=1;
        a[y][x]=1;
    }
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            cout << a[i][j] <<" ";
        }
        cout << endl;
    }
    
}
