#include<bits/stdc++.h>
using namespace std;
long long f=1e9+7;
int main(){
    int n; cin >> n;
    priority_queue<long long> p;
    while(n--){
        long long x; cin >> x;
        p.push(x);
    }
    long long sum=0;
    while(p.size()!=1){
        long long a=p.top();p.pop();
        long long b=p.top();p.pop();
        sum+=a+b;
        sum=sum%f;
        p.push(a+b);
    }
    cout << sum;
}
