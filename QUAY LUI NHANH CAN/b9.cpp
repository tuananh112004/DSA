#include<bits/stdc++.h>
using namespace std;
long long n,k,a[100];
long long ans=1e9,sum=0;
long long dem=0;
bool check=false;
void sinh(int i){
    for(int j=i;j<n;j++){
        sum+=a[j];
        dem++;
        if(sum==k){
            ans=min(ans,dem);
            check=true;
        }
        else{
            sinh(j+1);
        }
        dem--;
        sum-=a[j];
    }
    
    
}
int main(){
    cin >> n >> k;
    for(int i=0;i<n;i++){
        cin >> a[i];
    }
    sinh(0);
    if(check) cout <<ans;
    else cout <<"-1";
}
