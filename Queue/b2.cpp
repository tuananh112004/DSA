#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;cin >> n;
    queue<int> q;
    while(n--){
        string s; cin >> s;
        if(s=="PUSH"){
            int x; cin >> x;
            q.push(x);
        }
        else if(s=="PRINTFRONT"){
            if(!q.empty()) cout << q.front() <<endl;
            else cout <<"NONE\n";
        }
        else{
            if(!q.empty()) q.pop();
        }
    }
}
