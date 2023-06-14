#include<bits/stdc++.h>
using namespace std;
bool cmp(string a, string b){
    int x=a.size(),y=b.size();
    if(x!=y) return x>y;
    else return a>b;
}
int main(){
    string s; cin >> s;
    string ans="";
    for(auto &x:s){
        if(isalpha(x)) x=' ';
    }
    stringstream ss(s);
    string t;
    vector<string> v;
    while(ss>>t){
        int l=0;
        while(t[l]=='0'&&t.size()>1){
            t.erase(0,1);
        }
        v.push_back(t);
    }
    sort(v.begin(),v.end(),cmp);
    cout << v[0];
    
}
