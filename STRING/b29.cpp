#include<bits/stdc++.h>
using namespace std;
int main(){
    string s; cin >> s;
    string ans="";
    long long tong=0;
    for(auto &x:s){
        if(isalpha(x)){
            x=' ';
        }
    }
    stringstream ss(s);
    string t;
    while(ss>>t){
        tong+=stoll(t);
    }
    cout << tong;
}
