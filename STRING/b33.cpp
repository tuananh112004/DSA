#include<bits/stdc++.h>
using namespace std;


int main(){
    string s; cin >> s;
    bool check=false;
    for(auto x:s){
        if(x=='6') check=true;
    }
    if(check){
        string t=s;
        reverse(s.begin(),s.end());
        if(t==s){
            cout <<"YES";
        }
        else cout <<"NO";
    }
    else cout <<"NO";
} 
