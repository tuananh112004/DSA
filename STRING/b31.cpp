#include<bits/stdc++.h>
using namespace std;
int main(){
    string s; cin >> s;
    long long tong=0;
    for(auto x:s){
        tong+=x-'0';
    }
    cout << tong;
}
