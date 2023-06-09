#include<bits/stdc++.h>
using namespace std;
int main(){
    int n; cin >> n;
    while(n--){
        int x; cin >> x;
        char a[x][x];
        for(int i=0;i<x;i++){
            for(int j=0;j<x;j++){
                cin >> a[i][j];
            }
        }
        for(int i=0;i<x;i++){
            sort(a[i],a[i]+x);
        }
        bool ok=true;
        for(int i=0;i<x;i++){
            for(int j=1;j<x;j++){
                if(a[j][i]<a[j-1][i]){
                    ok=false;
                }
            }
        }
        if(ok){
            cout <<"YES"<< endl;
        }
        else{
            cout <<"NO"<< endl;
        }
    }
}

