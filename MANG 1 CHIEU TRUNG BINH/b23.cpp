#include<bits/stdc++.h>
using namespace std;
int main(){
    int n; cin >> n;
    multiset<int> ms;
    while(n--){
        int x; cin >> x;
        ms.insert(x);
    }
    for(auto x:ms){
        cout <<x <<" ";
    }
} 
