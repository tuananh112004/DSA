#include<bits/stdc++.h>
using namespace std;
long long f[1000007];
int main(){
    int n,q; cin >>n>> q;
    long long a[n];
    for(int i=0;i<n;i++){
        cin >> a[i];
    }
    f[0]=a[0];
    for(int i=1;i<n;i++){
        f[i]=a[i]-a[i-1];
    }
    while(q--){
        int l,r,k; cin >> l >> r >> k;
        f[l]+=k;
        f[r+1]-=k;
    }
    a[0]=f[0];
    for(int i=1;i<n;i++){
        a[i]=f[i]+a[i-1];
    }
    for(int i=0;i<n;i++){
        cout << a[i] <<" ";
    }
}
