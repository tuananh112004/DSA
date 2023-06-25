#include<bits/stdc++.h>
using namespace std;
int main(){
    stack<string> st;
    string s; cin >> s;
    string ans="";
    for(int i=0;i<s.size();i++){
        if(isalpha(s[i])){
            st.push(string(1,s[i]));
        }
        else{
            string a=st.top(); st.pop();
            string b=st.top(); st.pop();
            string tmp="(";
            tmp+=b+s[i]+a+")";
            st.push(tmp);
        }
    }
    cout << st.top();
}
