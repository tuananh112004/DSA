#include<bits/stdc++.h>
using namespace std;
int main(){
    long long n, s;
     cin >> n >> s;
     int a[n];
     for(int &x:a) cin >> x;
     long long tong=0;
     int l=0;
     long long dem=0;
     for(int i=0;i<n;i++){
         tong+=a[i];
         while(tong>=s){
             dem+=n-i;
             tong-=a[l];
             l++;
         }
        
     }
     cout << dem;
}

