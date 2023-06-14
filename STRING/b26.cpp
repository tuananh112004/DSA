#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin >> s;
    s+=" ";
    string ans="";
    string res="";
    int dem;
    ans+=s[0];
    for(int i=1;i<s.size();i++){
        if(s[i]==s[i-1]) ans+=s[i];
        else{
            if(res.size()<ans.size()){
                res=ans;
            }
            else if(res.size()==ans.size()){
                if(res<ans){
                    res=ans;
                }
            }
            ans="";
            ans+=s[i];
        }
    }
    cout << res;
    
}
