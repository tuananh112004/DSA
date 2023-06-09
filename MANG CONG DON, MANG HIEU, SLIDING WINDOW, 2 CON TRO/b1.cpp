#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,m; cin >> n >>  m;
    multiset<int> ms;
    for(int i=0;i<n;i++){
        int x; cin >> x;
        ms.insert(x);
    }
    while(m--){
        int x; cin >> x;
        ms.insert(x);
    }
    for(auto x:ms){
        cout <<x<<" ";
    }
}
