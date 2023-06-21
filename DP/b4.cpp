#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,k; cin >> n >> k;
    vector<int> a(n);
    vector<bool> dp(k+1,false);
    dp[0]=true;
    for(int i=0;i<n;i++){
        cin >> a[i];
    }
    for(int i=0;i<n;i++){
        for(int j=k;j>=a[i];j--){
            if(dp[j-a[i]]==true){
                dp[j]=true;
            }
        }
    }
    if(dp[k]){
        cout <<"1";
    }
    else{
        cout<<"0";
    }
}
