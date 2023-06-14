#include<bits/stdc++.h>
using namespace std;
bool check(string s){
    if(s.size()==1){
        if((s[0]-'0')%4==0) return true;
        else return false;
    }
    else{
        string ans="";
        ans+=s[s.size()-2];
        ans+=s[s.size()-1];
        int tmp=stol(ans);
        if(tmp%4==0) return true;
        else return false;
    }
}
int main(){
    string s; cin >> s;
    if(check(s)) cout <<"YES";
    else cout <<"NO";
}
