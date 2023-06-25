#include<bits/stdc++.h>
using namespace std;
int main(){
    stack<char> st;
    string s; cin >> s;
    int dem=0;
    for(auto x:s){
        if(x=='(') st.push(x);
        else{
            if(!st.empty()){
                st.pop();
            }
            else{
                dem++;
                st.push('(');
            }
        }
    }
    cout << dem+st.size()/2;
}
