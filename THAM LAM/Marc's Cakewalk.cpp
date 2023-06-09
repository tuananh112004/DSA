#include<bits/stdc++.h>
using namespace std;
int main(){
    int n; cin >> n;
    int a[n];
    for(auto &x:a)cin >> x;
    sort(a,a+n,greater<int>());
    long long sum=0;
    for(int i=0;i<n;i++){
        sum+=(pow(2,i)*a[i]);
    }
    cout << sum;
}
