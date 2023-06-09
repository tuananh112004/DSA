#include<bits/stdc++.h>
using namespace std;
int main(){
    int n; cin >> n;
    int a[n];
    
    long long tong=0;
    long long tmp =1000000007;
    for(int i=0;i<n;i++){
        cin >> a[i];
        
    }
    sort(a,a+n);
    for(int i=0;i<n;i++){
        tong+=(long long)a[i]*i;
        tong%=tmp;
}
    cout <<tong;
} 
