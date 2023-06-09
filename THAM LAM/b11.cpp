#include<bits/stdc++.h>
using namespace std;
using ll=long long;
int main(){
    int n; cin >> n;
    while(n--){
        map<char,ll> mp;
        ll k; cin >> k;
        string s; cin >> s;
        priority_queue<ll> p;
        for(auto i=0;i<s.size();i++){
            mp[s[i]]++;
        }
        for(auto x:mp){
            p.push(x.second);
        }
        ll sum=0;
            while(k>=1&&p.size()!=0){
                ll x=p.top(); p.pop();
                if(x-1>=1){
                    p.push(x-1);
}
                k--;
            }
            while(!p.empty()){
                ll x=p.top(); p.pop();
                sum+=pow(x,2); 
            }
        cout << sum << endl;
    }
}

