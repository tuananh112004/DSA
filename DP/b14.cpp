#include<bits/stdc++.h>
using namespace std;
int f[1000000];
int mod=1e9+7;
int main(){
    f[0]=1;
    int n; cin >> n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=6;j++){
            if(i-j>=0){
                f[i]+=f[i-j];
                f[i]=f[i]%mod;
            }
        }
    }
    cout << f[n]%mod;
}
