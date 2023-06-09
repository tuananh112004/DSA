#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,k; cin >> n>>k;
    int a[n];
    for(int i=0;i<n;i++){
        cin >> a[i];
    }
    long long sum=0;
    sort(a,a+n,greater<int>());
    for(int i=0;i<n;i++){
        if(k<=n/2){
            if(i<n-k){
                sum+=a[i];
            }
            else{
                sum-=a[i];
            }
        }
        else{
            if(i<k){
                sum+=a[i];
            }
            else{
                sum-=a[i];
            }
        }
    }
    cout << sum;
}
