#include<bits/stdc++.h>
using namespace std;
bool check(long long n){
    long long tmp=0;
    long long z=n;
    while(n>0){
        int a=n%10;
        tmp=tmp*10+a;
        n/=10;;
    }
    if(z==tmp) return true;
    else return false;
    
}
int main(){
    int n; cin >> n;
    long long a[n][n];
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin >> a[i][j];
        }
    }
    int dem=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<=i;j++){
            if(check(a[i][j])) dem++;
        }

    }
    cout << dem;
}
