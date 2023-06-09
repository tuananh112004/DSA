#include<bits/stdc++.h>
using namespace std;
int tong=0,n,a[100];
bool check=false;
void sinh(int i,int sum){
    if(check) return;
    for(int j=i+1;j<=n;j++ ){
        if(sum==tong){
            check=true;
        }
        else if(sum<tong){
            sinh(i+1,sum+a[j]);
        }
        sum-=a[j];
    }
}
int main(){
    cin >> n;
    for(int i=1;i<=n;i++){
        cin >>a[i];
        tong+=a[i];
    }
    if(tong%2==1){
        cout <<"0";
        return 0;
    }
    tong/=2;
    sinh(1,0);
    if(check)cout <<"1";
    else cout <<"0";
}
