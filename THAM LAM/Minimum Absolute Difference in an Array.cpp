#include<bits/stdc++.h>
using namespace std;
int main(){
    int n; cin >> n;
    int a[n];
    for(auto &x:a)cin >> x;
    sort(a,a+n);
    int tmp=1e9;
    for(int i=1;i<n;i++){
        tmp=min(tmp,a[i]-a[i-1]);
    }
    cout << tmp;
}
