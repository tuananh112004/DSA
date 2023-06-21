#include<bits/stdc++.h>
using namespace std;
int f[10000];
int main(){
    int n; cin >> n;
    int a[n+1];
    for(int i=1;i<=n;i++) cin >> a[i];
    f[1]=a[1];
    for(int i=1;i<=n;i++){
            f[i]=max(f[i-1],f[i-2]+a[i]);
    }
    cout << *max_element(f+1,f+n+1);
}
