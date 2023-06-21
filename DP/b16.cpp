#include<bits/stdc++.h>
using namespace std;
int f[1000000];
int mod=1e9+7;
int main(){
    int n,k; cin >> n >> k;
    int a[n];
    for(int i=0;i<n;i++){
        cin >> a[i];
    }
    f[0]=1;
    for(int i=1;i<=k;i++){
        for(int j=0;j<n;j++){
            if(i-a[j]>=0){
                f[i]+=f[i-a[j]];
                f[i]=f[i]%mod;
            }
        }
    }
     cout << f[k]%mod;
}
