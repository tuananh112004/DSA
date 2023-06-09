#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,k; cin >> n >>k;
    long long a[n];
    for(int i=0;i<n;i++){
        cin >> a[i];
    }
    map<int,int> mp;
    long long sum=0;
    int minn=1e7;
    for(int i=0;i<n;i++){
        sum+=a[i];
        if(sum==k){
            minn=min(minn,i+1);    
        }
        if(mp.count(sum-k)){
            minn=min(minn,i-mp[sum-k]);
        }
        mp[sum]=i;
    }
    if(minn!=1e7){
        cout <<minn;
    }
    else cout <<"-1";
}
