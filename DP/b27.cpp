#include<bits/stdc++.h>
using namespace std;
int f[1000001];
int tach(int n){
    int z=0;
    while(n){
        int a=n%10;
        z=max(z,a);
        n/=10;
    }
    return z;
}

int main(){
    int n; cin >> n;
    for(int i=1;i<=9;i++) f[i]=1;
    for(int i=10;i<=n;i++){
        int tmp1=tach(i);
        f[i]=f[tmp1]+f[i-tmp1];
    }
    cout << f[n];
}
