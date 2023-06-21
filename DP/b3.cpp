#include<bits/stdc++.h>
using namespace std;
int f[10000];
int main(){
    int n; cin >> n;
    int a[n];
    for(auto &x:a) cin >> x;
    for(int &x:f){
        x=1;
    }
    for(int i=1;i<n;i++){
        for(int j=0;j<i;j++){
            if(a[i]>a[j]){
                f[i]=max(f[i],f[j]+1);
            }
        }
    }
    int tm=*max_element(f,f+n);
    cout << n-tm;
}
