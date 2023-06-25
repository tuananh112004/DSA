#include<bits/stdc++.h>
using namespace std;
int tinh(string a, string b, char c){
    if(c=='+') return stoi(a)+stoi(b);
    else if(c=='-') return stoi(b)-stoi(a);
    else if(c=='*') return stoi(a)*stoi(b);
    else{
        return stoi(b)/stoi(a);
    }
}
int main(){
    stack<string> st;
    string s; cin >> s;
    string ans="";
    for(int i=0;i<s.size();i++){
        if(isdigit(s[i])) st.push(string(1,s[i]));
        else{
            string a=st.top(); st.pop();
            string b=st.top(); st.pop();
            int tmp=tinh(a,b,s[i]);
            st.push(to_string(tmp));
        }
    }
    cout << st.top();
}
