#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,k; cin >> n >>k;
    long long a[n];
    for(auto &x:a) cin >> x;
    sort(a,a+n);
    bool check=false;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
        int l=j+1,r=n-1;
        while(l<r){
            if(a[l]+a[r]==k-a[i]-a[j]){
                check =true;
                break;
            }
            if(a[l]+a[r]<k-a[i]-a[j]) l++;
            if(a[l]+a[r]>k-a[i]-a[j]) r--;
        }}
    }
    if(check) cout <<"YES";
    else cout <<"NO";
}
