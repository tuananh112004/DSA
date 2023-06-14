#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin >> s;
    string t="python";
    int l=0;
    int index=0;
    while(l<s.size()&&index<t.size()){
        if(s[l]==t[index]) index++;
        if(s[l]!=t[index]) l++;
    }
    if(index==6){
        cout <<"YES";
    }
    else cout <<"NO";
    
    
}
