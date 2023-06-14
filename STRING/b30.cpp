#include<bits/stdc++.h>
using namespace std;
bool check(string a, string b){
    string ab=a+b;
    string ba=b+a;
    return ab>ba;
}
int main(){
    string s; cin >> s;
    vector<string> v;
    for(int i=0;i<s.size();i++){
        if(isalpha(s[i])){
            s[i]=' ';
        }
    }
    stringstream ss(s);
    string k;
    while(ss>>k){
        int l=0;
        while(k.size()>1&& k[l]=='0'){
            k.erase(0,1);
        }
        v.push_back(k);
    }
    sort(v.begin(),v.end(),check);
    for(auto it:v) cout <<it;
}
