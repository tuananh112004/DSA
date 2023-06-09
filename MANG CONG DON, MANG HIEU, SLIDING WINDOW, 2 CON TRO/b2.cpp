#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,m; cin >> n >>m;
    int a[n],b[m];
    for(int i=0;i<n;i++){
        cin >> a[i];
    }
    for(int i=0;i<m;i++){
        cin >> b[i];
    }
    int l=0, r=0;
    while(l<n&&r<m){
        if(b[r]>a[l]){
            l++;
        }
        else {
            cout << l <<" ";
            r++;        
        }
    }
    if(r<m){
        for(int i=r;i<m;i++){
            cout << n <<" ";
        }
    }
}
