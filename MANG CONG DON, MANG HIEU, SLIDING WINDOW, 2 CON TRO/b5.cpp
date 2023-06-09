#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,s; cin >> n >> s;
    int a[n];
    for(int &x:a) cin >> x;
    int l=0;
    int res=1e7;
    int tong=0;
    for(int i=0;i<n;i++){
        tong+=a[i];
        while(tong>=s){
            res=min(res,i-l+1);
            tong-=a[l];
            l++;
        }
        
    }
    if(res==1e7) cout << "-1";
    else cout << res;
} 
