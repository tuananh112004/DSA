#include<bits/stdc++.h>
using namespace std;
bool check(int n){
    if(n<2) return false;
    for(int i=2;i<=sqrt(n);i++){
        if(n%i==0) return false;
    }
    return true;
}
int main(){
    int n;
    vector<int> v;
    map<int, int> mp;
     while(cin >> n){
         
         if(check(n)){
             v.push_back(n);
             mp[n]++;
         }
     }
     for(auto it:v){
         if(mp[it]!=0){
         
         cout << it <<" "<<mp[it]<<endl;
         mp[it]=0;}
     }
}
