#include<bits/stdc++.h>
using namespace std;
int main(){
    int n; cin >> n;
    int a[n];
    for(int i=0;i<n;i++){
        cin >> a[i];
    }
    int dem=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<i;j++){
            if(__gcd(a[i],a[j])==1){
                dem++;
            }
        }
    }
    cout << dem;
}
