#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,m; cin >> n>>m;
    int a[n];
    for(int i=0;i<n;i++){
        cin >> a[i];
    }
    long long tong=0;
    for(int i=1;i<n;i++){
        if(a[i]<=a[i-1]){
            int tmp=a[i];
            if(tmp+(a[i-1]-a[i])/m*m>a[i-1]){
                a[i]+=(a[i-1]-a[i])/m*m;
                tong+=(a[i-1]-a[i])/m;
            }
             if(tmp+(a[i-1]-a[i])/m*m<=a[i-1]){
                 tong+=(a[i-1]-a[i])/m+1;
                a[i]+=(a[i-1]-a[i])/m*m+m;
                
            }
        }
    }
    
    cout << tong;
} 
