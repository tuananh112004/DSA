#include<bits/stdc++.h>
using namespace std;
int main(){
    stack<char> st;
    string s; cin >> s;
    vector<char> v;
    for(int i=0;i<s.size();i++){
        if(!st.empty()){
            char tmp=st.top();
            if(s[i]!=tmp){
                st.push(s[i]);
            }
            else{
                st.pop();
            }
        }
        else{
            st.push(s[i]);
        }
    }
    if(st.empty()){
        cout <<"EMPTY";
        return 0;
    }
    while(!st.empty()){
        v.push_back(st.top()); st.pop();
    }
    reverse(v.begin(),v.end());
    for(auto x:v) cout << x;
}
