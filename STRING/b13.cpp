#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    getline(cin,s);
    stringstream ss(s),st(s);
    string t,k;
    map<string,int> mp;
    while(ss>>t){
        mp[t]++;
    }
    for(auto it:mp){
        cout << it.first<<" "<< it.second << endl;
    }
    cout << endl;
    while(st>>k){
        if(mp[k]!=0){
            cout << k <<" "<<mp[k]<< endl;
            mp[k]=0;
        }
    }
}
