#include<bits/stdc++.h>
using namespace std;
int uutien(char a){
    if(a=='-'||a=='+') return 1;
    if(a=='*'||a=='/') return 2;
    return 0;
}
int main(){
    stack<char> st;
    stack<string> st1;
    string s; cin >> s;
    string ans="";
    for(auto x:s){
        if(x=='(') st.push(x);
        else if(isalpha(x)) ans+=x;
        else if(x==')'){
            while(st.top() !='('){
                ans+=st.top();
                st.pop();
            }
            st.pop();
        }
        else{
            while(!st.empty()&&uutien(st.top())>=uutien(x)){
                ans+=st.top();
                st.pop();
            }
            st.push(x);
        }
    }
    while(!st.empty()) 
    {
        ans+=st.top(); st.pop();
    }
    cout << ans;
}
