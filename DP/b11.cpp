#include<bits/stdc++.h>
using namespace std;
int dp[101][101][101];
int main(){
    string a,b,c; cin >> a >> b >> c;
    int x=a.size(), y=b.size(),z=c.size();
    a="a"+a;
    b="b"+b;
    c="c"+c;
    
    for(int i=1;i<=x;i++){
        for(int j=1;j<=y;j++){
            for(int k=1;k<=z;k++){
                if(a[i]==b[j]&&a[i]==c[k]){
                    dp[i][j][k]=dp[i-1][j-1][k-1]+1;
                }
                else{
                    dp[i][j][k]=max(dp[i-1][j][k],max(dp[i][j-1][k],dp[i][j][k-1]));
                }
            }
        }
    }
    cout << dp[x][y][z];
}
