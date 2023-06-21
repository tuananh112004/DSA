#include<bits/stdc++.h>
using namespace std;
int f[1000000];
int mod=1e9+7;
int main(){
    int n,k; cin >> n >>k;
    int a[n];
    f[0]=0;
    for(int i=0;i<n;i++) cin >> a[i];
    for(int i=1;i<=k;i++){
        f[i]=1e9;
        for(int j=0;j<n;j++){
            if(i>=a[j]){
                f[i]=min(f[i],f[i-a[j]]+1);
            }
        }
    }
    if(f[k]!=1e9){
        cout <<f[k];
    }
    else{
        cout <<"-1";
    }
}
