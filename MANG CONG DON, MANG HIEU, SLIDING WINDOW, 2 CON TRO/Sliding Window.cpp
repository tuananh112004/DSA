#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,k; cin >> n >>k;
    long long a[n];
    for(int i=0;i<n;i++){
        cin >> a[i];
    }
    long long sum=0;
    for(int i=0;i<k;i++){
        sum+=a[i];
    }
    int index=0;
    long long ans=sum;
    for(int i=k;i<n;i++){
        sum+=a[i]-a[i-k];
        if(sum>ans){
            ans=sum;
            index=i-k+1;
        }
    }
    cout << ans << endl;
    for(int i=index;i<index+k;i++){
        cout << a[i] <<" ";
    }
}
