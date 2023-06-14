#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,m; cin >> n >> m;
    vector<int> v[n+1];
    while(m--){
        int x,y; cin >> x >> y;
        v[x].push_back(y);
    }
    for(int i=1;i<=n;i++){
        sort(v[i].begin(),v[i].end());
        cout <<i <<" : ";
        for(auto x:v[i]){
            cout << x <<" ";
        }
        cout << endl;
    }
}
