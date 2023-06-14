#include<bits/stdc++.h>
using namespace std;
bool cmp(pair<int,int> a, pair<int,int> b ){
    if(a.first !=b.first){
        return a.first < b.first;
    }
    else{
        return a.second < b.second;
    }
}
int main(){
    int n; cin >> n;
    vector<pair<int,int>> v;
    vector<int> v1[n+1];
    int a[n+1][n+1];
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            cin >> a[i][j];
            if(a[i][j]==1){
                    v.push_back({i,j});
                    v1[i].push_back(j);
            }
        }
    }
    sort(v.begin(),v.end(),cmp);
    for(pair<int,int> x:v){
        cout << x.first <<" "<< x.second <<endl;
    }
    cout << endl;
    for(int i=1;i<=n;i++){
        sort(v1[i].begin(),v1[i].end());
        cout <<i <<" : ";
        for(auto x:v1[i]){
            cout << x <<" "; 
        }
        cout << endl;
    }
}
