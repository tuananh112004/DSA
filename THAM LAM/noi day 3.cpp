#include<bits/stdc++.h>
using namespace std;
using ll=long long;
ll z=1e9+7;
int main(){
    int n; cin >> n;
    priority_queue<ll,vector<ll>,greater<ll>> p;
    while(n--){
        ll x; cin >>x;
        p.push(x);
    }
    ll sum=0;
    while(p.size()>1){
        ll x=p.top();p.pop();
        ll y=p.top();p.pop();
        sum+=x+y;
        sum=sum%(z);
        p.push(x+y);
    }
    cout << sum;
}

