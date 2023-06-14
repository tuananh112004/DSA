#include<bits/stdc++.h>
using namespace std;
string chuanhoa(string &a){
    for(int i=0;i<a.size();i++){
        if(i==0){
            a[i]=toupper(a[i]);
        }
        else a[i]=tolower(a[i]);
    }
    return a;
}
int main(){
    string s;
    getline(cin,s);
    stringstream ss(s);
    string t;
    vector<string> v;
    while(ss>>t){
        v.push_back(t);
    }
    for(int i=0;i<v.size();i++){
        if(i==v.size()-1){
            for(auto &x:v[i]) x=toupper(x);
        }
        else chuanhoa(v[i]);
    }
    for(int i=0;i<v.size();i++){
        if(i==v.size()-2){
            cout << v[i] <<", ";
        }
        else cout << v[i] <<" ";
    }
    cout << endl;
    cout << v[v.size()-1]<<", ";
    for(int i=0;i<v.size()-1;i++){
        cout << v[i] <<" ";
    }
}
