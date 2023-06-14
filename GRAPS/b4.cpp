#include<bits/stdc++.h>
using namespace std;
bool cmp(pair<int,int> a, pair<int,int> b){
    int x=a.first; int y=b.first;
    if(x!=y){
        return x<y;
    }
    else{
        return a.second < b.second;
    }
}
int main(){
    vector<pair<int,int>> v;
    int n; cin >> n;
    cin.ignore();
    for(int i=1;i<=n;i++){
        string s,t; getline(cin,s);
        stringstream ss(s);    
        while(ss>>t){
            int tmp=stoi(t);
                v.push_back({i,tmp});
        }
    }
    sort(v.begin(),v.end());
    for(pair<int,int> x:v){
        cout << x.first <<" "<< x.second<< endl;
    }
}
