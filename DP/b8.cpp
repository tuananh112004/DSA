#include<bits/stdc++.h>
using namespace std;
long long mod=1e9+7;
long long dp[1001][1001];
int main(){
    int n,k; cin >> n >> k;
    int w[n+1],v[n+1];
    for(int i=1;i<=n;i++) cin >> w[i];
    for(int i=1;i<=n;i++) cin >> v[i];
    for(int i=1;i<=n;i++){
        for(int j=1;j<=k;j++){
            //khong chon them mon nao
            dp[i][j]=dp[i-1][j];
            // chon them 1 mon, so sanh khong chon them 
            if(j>=w[i]){
                dp[i][j]=max(dp[i-1][j],dp[i-1][j-w[i]]+v[i]);
                //(dong tren) vd: chon 4 mon thi se tru di 1 de thanh 3 roi xet xem TH 3 mon do se 
                // co(can nang) va gia tri bang bao nhieu roi cong them gia tri cua mon thu 4 ta 
                // khong xet can tinh them can nang vi da xet o dk if(j>w[i])
            }
        }
    }
    cout << dp[n][k];
}
