#include<bits/stdc++.h>
using namespace std;
long long ans[1000001];
vector<long long> v;
void in(long long n){
    int dem=0;
    for(auto x:v){
        if(x<n) dem++;
    }
    cout << dem << endl;
}
int main(){
    int n; cin >> n;
    queue<long long> q;
    
    q.push(1);
    v.push_back(1);
    while(1){
        long long tmp=q.front(); q.pop();
        if(tmp>=1e18) break;
        q.push(tmp*10);
        q.push(tmp*10+1);
        v.push_back(tmp*10);
        v.push_back(tmp*10+1);
    }
    while(n--){
        long long x; cin >> x;
        in(x);
    }
}
