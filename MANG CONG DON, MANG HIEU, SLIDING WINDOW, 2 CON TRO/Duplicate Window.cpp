#include<bits/stdc++.h>
using namespace std;
int main(){
    int n; cin >> n;
    int k; cin >> k;
    int a[n];
    for(int i=0;i<n;i++){
        cin >> a[i];
    }
    sort(a,a+n);
    int l=0,r=1;
    bool check =false;
    while(r<n){
        if(a[l]!=a[r]){
            l++;
            r++;
        }
        else{
            check=true;
            break;
        }
    }
    if(check){
        cout <<"YES";
    }
    else cout <<"NO";
}
