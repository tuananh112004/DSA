#include<bits/stdc++.h>
using namespace std;
int main(){
    int n; cin >> n;
    int a[n],b[n];
    for(auto &x:a){
        cin >> x;
    }
    b[0]=1;
    for(int i=1;i<n;i++){
        if(a[i]>a[i-1]){
            b[i]=b[i-1]+1;
        }
        else{
            b[i]=1;
        }
    }
    for(int i=n-2;i>=0;i--){
        int  tmp=b[i];
        if(a[i]>a[i+1]){
            tmp=b[i+1]+1;
        }
        b[i]=max(b[i],tmp);
    }
    long long sum=0;
    for(int i=0;i<n;i++){
        sum+=b[i];
    }
    cout << sum;
}
