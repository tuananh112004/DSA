#include<bits/stdc++.h>
using namespace std;
int main(){
    stack<string> st;
    string s; cin >> s;
    for(int i=s.size()-1;i>=0;i--){
        if(isalpha(s[i])){
            st.push(string(1,s[i]));
        }
        else{
            string a=st.top();st.pop();
            string b=st.top();st.pop();
            string tmp="(";
            tmp+=a+s[i]+b+")";
            st.push(tmp);
        }
    }
    cout << st.top();
}
