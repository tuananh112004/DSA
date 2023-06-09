#include<bits/stdc++.h>
using namespace std;
using ll=long long;
int cnt[10000];
int main(){
   string s; cin >> s;
   int dem=0;
   stack<char> st;
   for(int i=0;i<s.size();i++){
           if(s[i]=='(') st.push(s[i]);
           else{
               if(st.empty()) dem++;
               else{
                   st.pop();
            }
        }
   }
   cout << dem;
}
