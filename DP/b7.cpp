#include<bits/stdc++.h>
using namespace std;
long long mod=1e9+7;
long long f[100000];
int main(){
    int k,n; cin >> k >> n;
    vector<int> a(n);
    vector<bool> dp(k+1,false);
    for(int i=0;i<n;i++){
        cin >>a[i];
    }
    dp[0]=1;
    for(int i=0;i<n;i++){
        for(int j=k;j>=a[i];j--){
            if(dp[j-a[i]]==true){
                dp[j]=true;
            }
        }
    }
    for(int i=k;i>=0;i--){
        if(dp[i]){
            cout << i ; return 0;
        }
    }
}
