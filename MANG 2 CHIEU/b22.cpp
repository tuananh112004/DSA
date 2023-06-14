#include<bits/stdc++.h>
using namespace std;
int main(){
    int n; cin >> n;
    int a[n][n];
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin >> a[i][j];
        }
    }
    int dem=1;
    int h1=0;
    while(dem<=n*n){
        for(int i=0;i<n;i++){
            cout << a[h1][i]<<" ";
            dem++;
        }
        if(dem>=n*n) break;
        cout << endl;
        h1++;
        for(int i=n-1;i>=0;i--){
            cout << a[h1][i]<<" ";
            dem++;
        }
        h1++;
        cout << endl;
    
    }
}
