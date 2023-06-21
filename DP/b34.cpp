#include<bits/stdc++.h>
using namespace std;
int f[1000001];
int g[1000001];
int main(){
    int n; cin >> n;
    long long a[n+1];
    f[1]=1;
    int res=1;
    for(int i=1;i<=n;i++) cin >> a[i];
    for(int i=2;i<=n;i++){
        if(a[i]>a[i-1]){
            f[i]=f[i-1]+1;
            res=max(res,f[i]);
        }
        else f[i]=1;
    }
    g[n]=1;
    for(int i=n-1;i>=1;i--){
        if(a[i]<a[i+1]){
            g[i]=g[i+1]+1;
        }
        else{
            g[i]=1;
        }
    }
    for(int i=2;i<=n-1;i++){
        if(a[i-1]<a[i+1]){
            res=max(res,f[i-1]+g[i+1]);
        }
    }
    cout << res;
}
