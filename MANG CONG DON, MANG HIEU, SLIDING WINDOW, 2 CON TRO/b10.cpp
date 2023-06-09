#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,k; cin >> n >>k;
    long long a[n];
    for(long long &x:a) cin >> x;
    sort(a,a+n);
    int l=0,r=n-1;
    bool check=false;
    while(l<r){
        if(a[l]+a[r]==k){
            check=true;
            break;
        }
        if(a[l]+a[r]<k) l++;
        if(a[l]+a[r]>k) r--;
    }
    if(check) cout <<"YES";
    else cout <<"NO";
}
