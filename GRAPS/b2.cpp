#include<bits/stdc++.h>
using namespace std;
int cnt[1001];
int main(){
    int n; cin >> n;
    vector<pair<int,int>> v;
    cin.ignore();
    for(int i=1;i<=n;i++){
        string s,t; getline(cin,s);
        stringstream ss(s);
        while(ss>>t){
            int tmp=stoi(t);
            if(tmp>i){
                v.push_back({i,tmp});
            }
            
        }
    }
    for(pair<int,int> x:v){
        cout << x.first <<" "<< x.second<< endl;
    }
}
