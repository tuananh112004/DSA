#include<bits/stdc++.h>
using namespace std;
bool cmp(string a, string b){
    return a.size()>b.size();
}
int main(){
    string s,t; cin >> s;
    priority_queue<string> p;
    for(int i=0;i<s.size();i++){
        if(s[i]=='0') s[i]=' ';
    }
    stringstream ss(s);
    vector<string> v;
    while(ss>>t){
        p.push(t);
    }
    long long ti=0;
    while(!p.empty()){
        string tmp=p.top();
        ti+=tmp.size();
        p.pop();
        if(p.empty()) break;
        p.pop();
    }
    cout << ti;
}
