#include<bits/stdc++.h>
using namespace std;
long long mod=1e9+7;
long long f[100000];
int main(){
    int n; cin >> n;
    f[0]=1;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=3;j++){
            if(i-j>=0){
                f[i]+=f[i-j];
            }
        }
    }
    cout << f[n];
}
