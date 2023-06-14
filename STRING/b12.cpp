#include<bits/stdc++.h>
using namespace std;
bool cmp(string a, string b){
    int x=a.size();int y=b.size();
     return x<y;
}
bool check(string a){
    string t=a;
    reverse(a.begin(),a.end());
    if(t==a) return true;
    else return false;
}
int main(){
    string s;
    getline(cin,s);
    stringstream ss(s);
    string t;
    map<string,int> mp;
    vector<string> v;
    
    while(ss>>t){
        mp[t]++;
        if(check(t)&&mp[t]==1){
            v.push_back(t);
        }
    }
    stable_sort(v.begin(),v.end(),cmp);
    for(auto it:v) cout << it <<" ";
}
