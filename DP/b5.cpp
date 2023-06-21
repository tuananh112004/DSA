#include<bits/stdc++.h>
using namespace std;
long long mod=1e9+7;
long long f[100000];
int main(){
    int n,k; cin >> n >>k;
    f[0]=1;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=k;j++){
            if(i-j>=0){
                f[i]+=f[i-j];
                f[i]=f[i]%mod;
            }
        }
    }
    cout << f[n]%mod;
}
