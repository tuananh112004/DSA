#include<bits/stdc++.h>
using namespace std;
int main(){
    int n; cin >> n;
    queue<string> q;
    vector<string> v;
    q.push("1");
    v.push_back("1");
    while(v.size()<n){
        string tmp=q.front(); q.pop();
        q.push(tmp+"0");
        q.push(tmp+"1");
        v.push_back(tmp+"0");
        v.push_back(tmp+"1");
    }
    for(int i=0;i<n;i++) cout << v[i] <<" ";
}
