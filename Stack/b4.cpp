#include<bits/stdc++.h>
using namespace std;
bool check(char a, char b){
    return((a=='('&&b==')') || (a=='{'&&b=='}') || (a=='['&&b==']')) ;
}
int main(){
    stack<char> st;
    string s; cin >> s;
    int dem=0;
    for(int i=0;i<s.size();i++){
        if(s[i]=='('||s[i]=='{'||s[i]=='['){
            st.push(s[i]);
        }
        else{
            if(!st.empty()){
                char x=st.top();
                st.pop();
                if(!check(x,s[i])){
                    dem+=2;
                }
            }
            else{
                dem++;
            }
            
        }
    }
    cout <<dem+st.size();
}
