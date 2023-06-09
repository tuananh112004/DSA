#include<bits/stdc++.h>
using namespace std;
long long f[1000007];

int main(){
    int n; cin >> n;
    long long a[n+1];
    a[0]=0;
    f[0]=a[0];
    for(int i=1;i<=n;i++){
        cin >> a[i];
            f[i]=a[i]+f[i-1];
    }
    int q;
    cin >> q;
    while(q--){
        int r,l; cin >> l >> r;
        cout << f[r]-f[l-1] <<endl;
    }
    
}
