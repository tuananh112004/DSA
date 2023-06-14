#include<bits/stdc++.h>
using namespace std;
int main(){
    string s; cin >> s;
    string ans="";
    string tmp="";
    tmp+=s[0];
    s+=s[s.size()-1];
    for(int i=1;i<s.size();i++){
        if(s[i]!=s[i-1]) tmp+=s[i];
        else{
            if(tmp.size()>ans.size()){
                ans=tmp;
            }
            else if(tmp.size()==ans.size()){
                if(tmp>ans) ans=tmp;
            }
            tmp="";
            tmp+=s[i];
        }
    }
    cout << ans;
}
