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
    int h1,h2; cin >> h1 >> h2;
    h1--;
    h2--;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(i==h1){
                cout << a[h2][j] <<" ";
            }
            else if(i==h2){
                cout << a[h1][j] <<" ";
            }
            else{
                cout << a[i][j] <<" ";
            }
        }
        cout << endl;
    }
}
