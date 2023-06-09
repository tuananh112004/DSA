#include<bits/stdc++.h>
using namespace std;
int main(){
    int n; cin >> n;
    priority_queue<long long, vector<long long>, greater<long long>> pq;
    while(n--){
        int x; cin >> x;
        pq.push(x);
    }
    long long sum=0;
    while(pq.size()!=1){
        long long a=pq.top(); pq.pop();
        long long b=pq.top(); pq.pop();
        sum+=a+b;
        pq.push(a+b);
    }
    cout << sum;
}
