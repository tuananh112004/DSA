#include<bits/stdc++.h>
using namespace std;
string doi5(string s){
    for(int i=0;i<s.size();i++){
        if(s[i]=='5') s[i]='6';
    }
    return s;
}
string doi6(string s){
    for(int i=0;i<s.size();i++){
        if(s[i]=='6') s[i]='5';
    }
    return s;
}


int main(){
    long long a,b;
    cin >> a >> b;
    string s=to_string(a);
    string x=to_string(b);
    cout << stoll(doi5(s))+stoll(doi5(x))<<" "<< stoll(doi6(s))+stoll(doi6(x));
}
