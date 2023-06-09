#include<bits/stdc++.h>
using namespace std;
int f[1000007];
int d[1000007];
int ans[1000007];
int main(){
    int n,k,q;
    cin >> n >> k >> q;
    while(n--){
        int l,r; cin >> l >> r;
        f[l]+=1;
        f[r+1]-=1;
    }
    
    d[0]=f[0];
    for(int i=1;i<200000;i++){
        d[i]=f[i]+d[i-1];
    }
    if(d[0]>=k){
        ans[0]=1;
    }
    else ans[0]=0;
    for(int i=1;i<200000;i++){
        if(d[i]>=k){
            ans[i]=1+ans[i-1];
        }
        else ans[i]=ans[i-1];
    }    
    while(q--){
        int l,r;
        cin >> l >> r;
        cout << ans[r]-ans[l-1]<< endl;
    }
    
    
    
} 
