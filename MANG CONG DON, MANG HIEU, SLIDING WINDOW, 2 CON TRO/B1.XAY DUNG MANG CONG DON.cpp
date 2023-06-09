#include<bits/stdc++.h>
using namespace std;
long long f[1000007];
int main(){
    int n; cin >> n;
    long long a[n];
    for(int i=0;i<n;i++){
        cin >> a[i];
    }
    f[0]=a[0];
    for(int i=1;i<n;i++){
        f[i]=a[i]+f[i-1];
    }
    for(int i=0;i<n;i++){
        cout << f[i] <<" ";
    }
}
