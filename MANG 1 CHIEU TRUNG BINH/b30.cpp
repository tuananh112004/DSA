#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,k; cin >> n >>k;
    int a[n];
    for(int i=0;i<n;i++){
        cin >> a[i];
    }
    sort(a,a+n);
    long long x=0;long long y=0;
   
        if(n-k>=k){
            for(int j=0;j<k;j++){
                x+=a[j];
            }
            for(int j=k;j<n;j++){
                y+=a[j];
            }
            cout << y-x;
        }
        else{
            for(int j=n-1;j>=n-k;j--){
                x+=a[j];
            }
            for(int j=0;j<n-k;j++){
                y+=a[j];
            }
             cout << x-y;
        }

   
    
} 
