#include<bits/stdc++.h>
using namespace std;
int check(long long a[], long long b[],int n){
    for(int i=0;i<n;i++){
        if(a[i]!=b[i]&&a[n-i-1]!=b[i]) return 0;
    }
    return 1;
}
int main(){
    int n;
    cin >> n ;
    long long a[n],b[n];
    for(int i=0;i<n;i++){
        cin >> a[i];
        b[i]=a[i];
    }
    sort(b,b+n);
    if(check(a,b,n)) cout <<"YES";
    else{
        cout <<"NO";
    }
}
