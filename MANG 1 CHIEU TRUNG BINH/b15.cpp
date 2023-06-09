#include<bits/stdc++.h>
using namespace std;
int main(){
    int n; cin >> n;
    long long a[n];
    for(int i=0;i<n;i++){
        cin >> a[i];
    }
    sort(a,a+n);
    int tmp=1e7;
    int dem=0;
    for(int i=1;i<n;i++){
        if(tmp>a[i]-a[i-1]){
            tmp=a[i]-a[i-1];
            dem=1;
        }
        else if(a[i]-a[i-1]==tmp) dem++;
    }
    cout << tmp << " "<< dem;
}
