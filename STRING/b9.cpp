#include<bits/stdc++.h>
using namespace std;
int main(){
    string a;
    map<string,int> mp;
    while(cin >> a){
        mp[a]++;
    }
    cout << mp.size();
    
}
