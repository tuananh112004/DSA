#include<bits/stdc++.h>
using namespace std;
bool check(char a, char b){
    return((a=='('&&b==')') || (a=='{'&&b=='}') || (a=='['&&b==']')) ;
}
int main(){
    stack<char> st;
    string s; cin >> s;
    for(int i=0;i<s.size();i++){
        if(s[i]=='('||s[i]=='{'||s[i]=='['){
            st.push(s[i]);
        }
        else{
            if(!st.empty()){
                char x=st.top();
                st.pop();
                if(!check(x,s[i])){
                    cout <<"NO";
                    return 0;
                }
            }
            else{
                cout <<"NO";
                return 0;
            }
        }
    }
    cout <<"YES";
}
