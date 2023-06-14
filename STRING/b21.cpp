#include<bits/stdc++.h>
using namespace std;
int main(){
    string s,t,x,y;
    getline(cin,s);
    getline(cin,t);
    map<string,int> mp;
    stringstream ss(s),tt(t);
    while(ss>>x){
        for(auto &z:x) z=tolower(z);
        mp[x]++;
    }
    set<string> se;
    while(tt>>y){
        for(auto &z:y) z=tolower(z);
        if(mp[y]!=0){
            se.insert(y);
            mp[y]=0;
        }
    }
    for(auto it:se) cout << it <<" ";
    
}
