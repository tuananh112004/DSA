#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    int f[n+1]={0};
    f[1]=1;
    for(int i=2;i<=n;i++){
        f[i]=i;
        for(int j=1;j<=sqrt(i);j++){
            // vd: 20=1^2+f[19]
            //       =2^2+f[16]
            //       =3^2+f[11]
            f[i]=min(f[i],1+f[i-j*j]);
        }
    }
    cout << f[n];
}
