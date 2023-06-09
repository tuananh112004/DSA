#include<bits/stdc++.h>
using namespace std;
map<long long,int> mp;
bool check(long long n){
    int a=n%10;
    n/=10;
    while(n!=0){
        int b=n%10;
        if(a<b) return false;
        n/=10;
        a=b;
    }
    return true;
}
bool cmp(long long a,long long b){
    int x=mp[a];int y=mp[b];
    if(x!=y){
        return x>y;
    }
    else return a<b;
}
int main(){
    long long n; 
    
    vector<long long> v;
    while(cin >> n){
        if(check(n)){
            mp[n]++;
            v.push_back(n);
        }
    }
    sort(v.begin(),v.end(),cmp);
    for(auto it:v){
       if(mp[it]!=0){
            cout << it <<" "<<mp[it]<<endl;
           mp[it]=0;
       }
    }
}
