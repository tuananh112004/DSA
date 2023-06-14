#include<bits/stdc++.h>
using namespace std;
int main(){
    string a,t,m;
    map<string,int> mp,mp1;
    getline(cin,a);
    stringstream ss(a);
    stringstream st(a);
    string ans="";
    string ans1="";
    while(ss>>t){
        mp[t]++;
        mp1[t]++;
    }
    while(st>>m){
        if(mp[m]!=0){
            ans+=m;
            ans+=" ";
            mp[m]=0;}
        }
    ans.pop_back();
    for(auto it:mp1){
        ans1+=it.first;
        ans1+=" ";
    }
    ans1.pop_back();
    cout << ans1 << endl;
    cout << ans << endl;
}
