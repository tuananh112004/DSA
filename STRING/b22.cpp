#include<bits/stdc++.h>
using namespace std;
int main(){
    string s,t,x,y;
    getline(cin,s);
    getline(cin,t);
    map<string,int> mp;
    stringstream ss(s),tt(t);
    while(tt>>y){
        for(auto &z:y) z=tolower(z);
        mp[y]++;
    }
    set<string> se;
    while(ss>>x){
        for(auto &z:x) z=tolower(z);
        if(mp[x]==0){
            se.insert(x);
            mp[x]=1;
        }
    }
    for(auto it:se) cout << it <<" ";
    
}
