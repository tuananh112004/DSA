#include<bits/stdc++.h>
using namespace std;
int main(){
    stack<char> st;
    string s; cin >> s;
    int n;cin >> n;
    int cnt=1;
    st.push(s[0]);
    for(int i=1;i<s.size();i++){
        if(!st.empty()){
            char top=st.top();
            if(top==s[i]){
                st.push(s[i]);
                cnt++;
            }
            else{
                cnt=1;
                st.push(s[i]);
            }
            if(cnt==n){
                for(int k=0;k<n;k++){
                    st.pop();
                }
                cnt=1;
            }
        }
        else{
            st.push(s[i]);
        }
    }
    vector<char> v;
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
