#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    getline(cin,s);
    stringstream ss(s),st(s);
    string t,k;
    string ans="",ans1="";
    int key,key1;
    int maxx=0; int minn=1e7;
    map<string,int> mp;
    while(ss>>t){
        mp[t]++;
    }
    for(auto it:mp){
        if(it.second>=maxx){
            maxx=it.second;
            ans=it.first;
        }
        if(it.second<=minn){
            minn=it.second;
            ans1=it.first;
        }
    }
    cout << ans <<" "<< maxx << endl;
    cout << ans1 <<" "<<minn;
    
}
