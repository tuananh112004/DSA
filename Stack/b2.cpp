#include<bits/stdc++.h>
using namespace std;
int main(){
    int n; cin >> n;
    stack<int> st;
    while(n--){
        string s; cin >> s;
        if(s=="push"){
            int x; cin >> x;
            st.push(x);
        }
        else if(s=="top"){
            if(!st.empty()){
                cout << st.top() << endl;
            }
            else{
                cout <<"NONE\n";
            }
        }
        else{
            if(!st.empty()){
                st.pop();
            }
        }
    }
}
