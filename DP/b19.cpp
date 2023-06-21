#include<bits/stdc++.h>
using namespace std;
int f[1001][1001];
int mod=1e9+7;
int main(){
    int n; cin >> n;
    char a[n+1][n+1];
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            cin >> a[i][j];
        }
    }
    f[1][0]=1;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            if(a[i][j]=='.'){
                if(i==1) f[i][j]+=f[i][j-1];
                else if(j==1) f[i][j]+=f[i-1][j];
                else{
                    f[i][j]+=f[i-1][j]+f[i][j-1];
                    
                }        
            }
            else{
                f[i][j]=0;
            }
            f[i][j]=f[i][j]%mod;
        }
    }
        cout << f[n][n];
}
