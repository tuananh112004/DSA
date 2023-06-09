#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,k; cin >> n >>k;
    int a[n];
    for(int i=0;i<n;i++){
        cin >> a[i];
    }
    int tong=0;
    int res=0;
    int l=0;
    for(int i=0;i<n;i++){
        tong+=a[i];
        while(tong>k){
            tong-=a[l];
            ++l;
        }
        res=max(res,i-l+1);
    }
    cout << res;
}
