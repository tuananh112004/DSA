#include<bits/stdc++.h>
using namespace std;
int f[1000007];
int main(){
    int n,q; cin >> n>>q;
    int a[n];
    for(int i=0;i<n;i++){
        cin >> a[i];
    }
    f[0]=a[0];
    for(int i=1;i<n;i++){
        f[i]=a[i]+f[i-1];
    }
    while(q--){
        int l,r;
        cin >> l >> r;
        cout << f[r]-f[l-1]<< endl;
    }
}
