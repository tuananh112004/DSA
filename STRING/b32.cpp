#include<bits/stdc++.h>
using namespace std;
bool check(int a){
    if(a<2) return false;
    for(int i=2;i<=sqrt(a);i++){
        if(a%i==0) return false;
    }
    return true;
}
int main(){
    string s; cin >> s;
    long long tong=0;
    bool check1=true;
    for(auto x:s){
        int tmp=x-'0';
        if(check(tmp)==false){
            cout <<"NO";
            return 0;
        }
        tong+=tmp;
    }
    if(check(tong)) cout <<"YES";
    else cout <<"NO";
    

}
