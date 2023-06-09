#include<bits/stdc++.h>
using namespace std;
int cnt[10000];
int main(){
    int n; cin >> n;
    priority_queue<int,vector<int>,greater<int>> p;
    while(n--){
        int x; cin >> x;
        p.push(x);
    }
    int dem=0,time=0;
    while(!p.empty()){
        if(time>p.top()){
            p.pop();
        }
        else{
            time+=p.top();
            dem++;
            p.pop();
        }
    }
    cout << dem;
}
