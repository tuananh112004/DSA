#include<bits/stdc++.h>
using namespace std;
int a[257];
int main(){
    string s; cin >> s;
    priority_queue<int> p;
    for(int i=0;i<s.size();i++){
        a[s[i]]++;
    }
    for(int i=0;i<257;i++){
        if(a[i]!=0){
            p.push(a[i]);
        }
    }
    int trong=s.size();
    while(!p.empty()){
        int x; x=p.top(); p.pop();
        if(trong-x<x-1){
            cout <<"NO";
            return 0;
        }
        else{
            trong-=x;
        }
    }
    cout << "YES";
}
