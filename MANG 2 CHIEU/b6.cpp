#include<bits/stdc++.h>
using namespace std;
int main(){
    int n; cin >> n;
    int a[n][n];
    int dem=1;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin >> a[i][j];
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(i==j){
                swap(a[i][j],a[i][n-i-1]);
            }
        }        
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<< a[i][j]<<" ";
        }
        cout<<endl;
    }
}
