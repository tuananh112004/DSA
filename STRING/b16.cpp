#include<bits/stdc++.h>
using namespace std;
string chuanhoa(string a){
    for(int i=0;i<a.size();i++){
        if(i==0) a[i]=toupper(a[i]);
        else a[i]=tolower(a[i]);
    }
    return a;
}
int main(){
    string s,t;
    getline(cin,s);
    cin >> t;
    stringstream ss(s);
    string x;
    string ans="";
    while(ss>>x){
        x=chuanhoa(x);
        cout << x <<" ";
    }
    cout << endl;
    if(t[2]!='/') t="0"+t;
    if(t[5]!='/') t.insert(3,"0");
    cout << t;
}

