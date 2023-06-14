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
    cout <<"Pattern "<<dem <<":"<< endl;
    dem++;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout << a[j][i] <<" ";;
        }
        cout << endl;
    }
    cout <<"Pattern "<<dem <<":"<< endl;
    dem++;
    for(int i=n-1;i>=0;i--){
        for(int j=n-1;j>=0;j--){
            cout << a[i][j] <<" ";;
        }
        cout << endl;
    }
        cout <<"Pattern "<<dem <<":"<< endl;
    dem++;
    for(int  i=n-1;i>=0;i--){
        for(int j=0;j<n;j++){
            cout << a[j][i] <<" ";;
        }
        cout << endl;
    }
            cout <<"Pattern "<<dem <<":"<< endl;
    dem++;
    for(int  i=0;i<n;i++){
        for(int j=n-1;j>=0;j--){
            cout << a[i][j] <<" ";;
        }
        cout << endl;
    }
}
