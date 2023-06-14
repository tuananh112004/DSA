#include<bits/stdc++.h>
using namespace std;
bool check(string s){
    for(int i=1;i<s.size();i++){
        if(s[i]<s[i-1]) return false;
    }
    return true;
}
bool check2(string s){
    for(int i=0;i<s.size()-1;i++){
        if(s[i]<s[i+1]) return false;
    }
    return true;
}
int main(){
    string s; cin >> s;
    if(check(s)||check2(s)) cout <<"YES";
    else cout <<"NO";
}
