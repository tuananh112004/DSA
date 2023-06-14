#include<bits/stdc++.h>
using namespace std;
int main(){
    string a;
    cin >> a;
    map<char,int> mp;
    for(int i=0;i<a.size();i++){
        a[i]=tolower(a[i]);
        if(isalpha(a[i])){
            mp[a[i]]++;
        }
    }
    if(mp.size()==26){
        cout <<"YES";
    }
    else cout << "NO";
}
