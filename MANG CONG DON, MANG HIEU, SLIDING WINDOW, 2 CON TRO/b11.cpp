#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,k; cin >> n >>k;
    long long a[n];
    for(auto &x:a) cin >> x;
    sort(a,a+n);
    bool check=false;
    for(int i=0;i<n;i++){
        int l=i,r=n-1;
        while(l<r){
            if(a[l]+a[r]==k-a[i]){
                check =true;
                break;
            }
            if(a[l]+a[r]<k-a[i]) l++;
            if(a[l]+a[r]>k-a[i]) r--;
        }
    }
    if(check) cout <<"YES";
    else cout <<"NO";
}
