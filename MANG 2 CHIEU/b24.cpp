#include<bits/stdc++.h>
using namespace std;
int cnt[101];
int main(){
    int n; cin >> n;
    int a[n][n];
    map<int,int> mp;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin >> a[i][j];
            if(cnt[a[i][j]]==i){
                cnt[a[i][j]]++;
            }
        }
    }
    bool check =false;
    sort(a[0],a[0]+n);
    for(int i=0;i<n;i++){
        if(cnt[a[0][i]]==n){
            cout << a[0][i] <<" ";
            cnt[a[0][i]]++;
            check=true;
        }
    }
    if(check==false) cout <<"NOT FOUND";
}
