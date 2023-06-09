#include<bits/stdc++.h>
using namespace std;
string tmp={"()[]{}"};
int n;
string s="";
vector<string>res;
bool check(string s){
    stack<char> t;
    for(int i=0;i<s.size();i++){
        if(s[i]=='{'||s[i]=='('||s[i]=='['){
            t.push(s[i]);
        }
        else{
            if(t.empty()) return false;
            char y=t.top();
            t.pop();
            if((s[i]==')'&&y!='(')||(s[i]==']'&&y!='[')||(s[i]=='}'&&y!='{')) return false;
            
        }
    }
    if(t.empty()) return true;
    return false;
        
}
void sinh(int i){
    for(int j=0;j<tmp.size();j++){
        s+=tmp[j];
        if(n==s.size()){
            if(check(s)){
                res.push_back(s);
            }
        }
        
        else{
            sinh(i+1);
        }
        s.pop_back();
    }
}
int main(){
    cin >> n;
    if(n%2==1){
        cout <<"NOT FOUND";
        return 0;
    }
    else{
        sinh(1);
        sort(res.begin(),res.end());
        for(auto x:res){
            cout << x << " ";
        }
    }
    
}
