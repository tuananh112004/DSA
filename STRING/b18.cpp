#include<bits/stdc++.h>
using namespace std;
int main(){




int n; cin >> n;

    cin.ignore();
    while(n--){
        string s,t;
        getline(cin,s);
        for(char &x:s){
            x=tolower(x);
        }
        stringstream ss(s);
        vector<string> v;
        while(ss>>t){
            v.push_back(t);
        }
        
        cout << v[v.size()-2];
        for(int i=0;i<v.size()-2;i++){
            cout << v[i][0];
        }
        cout << "@xyz.edu.vn" << endl;
        string ns=v[v.size()-1];
        string tmp;
        stringstream ss1(ns);
        while(getline(ss1,t,'/')){
            cout << stoi(t);
        }
        cout << endl;
    }
}
