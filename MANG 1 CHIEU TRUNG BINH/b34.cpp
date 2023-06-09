#include<bits/stdc++.h>
using namespace std;
using ll=long long;
int main(){
    int n; cin >> n;
    int k; cin >> k;
    ll a[n];
    map<ll,ll> mp;
    ll index =-1;
    for(ll &x:a) cin >> x;
    for(int i=0;i<n;i++){
        if(mp.count(a[i]+k)) index=max(index,i-mp[a[i]+k]);
        if(mp.count(a[i]-k)) index=max(index,i-mp[a[i]-k]);
        if(!mp.count(a[i])) mp[a[i]]=i; 
    }
    cout << index;
}
