#include<bits/stdc++.h>
using namespace std;
int main(){
    string n; cin >> n;
    long long x=n.size();
    map<char,int> mp;
    for(char x:n) mp[x]++;
    for(auto it :mp){
        x+=(long long)it.second*(it.second-1)/2;
    }
    cout << x;
}
