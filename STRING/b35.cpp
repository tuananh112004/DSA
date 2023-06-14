#include<bits/stdc++.h>
using namespace std;
bool check(string s){
    int tong=0;
    for(int i=0;i<s.size();i++){
        tong+=s[i]-'0';
    }
    if(tong%3==0) return true;
    else return false;
}
bool check1(string a){
    char t=a[a.size()-1];
    if((t-'0')%2==0) return true;
    else return false;
}
int main(){
    string s; cin >> s;
    if(check(s)&&check1(s)) cout <<"YES";
    else cout  <<"NO";
}
