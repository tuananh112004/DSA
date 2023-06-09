#include<bits/stdc++.h>
using namespace std;
int main(){
    int n; cin>> n;
    long long a[n],b[n];
    for(auto &x:a) cin >>x;
    for(auto &x:b) cin >> x;
    sort(a,a+n);sort(b,b+n);
    long long sum=0;
    for(int i=0;i<n;i++){
        sum+=(long long)(a[i]*b[i]);
    }
    cout << sum;
}
