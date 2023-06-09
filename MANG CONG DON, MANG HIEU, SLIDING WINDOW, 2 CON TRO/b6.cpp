#include<bits/stdc++.h>
using namespace std;
int main(){
    int n, s;
     cin >> n >> s;
     int a[n];
     for(int &x:a) cin >> x;
     int tong=0;
     int l=0;
     int dem=0;
     for(int i=0;i<n;i++){
         tong+=a[i];
         while(tong>s){
             
             tong-=a[l];
             l++;
         }
         dem+=i-l+1;
     }
     cout << dem;
}
