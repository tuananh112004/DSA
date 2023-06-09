#include<bits/stdc++.h>
using namespace std;
long long f[1000007];

int main(){
    int n; cin >> n;
    map<int,int> mp;
    int a[n];
    for(int i=0;i<n;i++){
        cin >> a[i];
        mp[a[i]]++;
    }
    long long tmp=0;
    for(auto x:a){
        if(mp[x]>1){
            tmp+=(long long)mp[x]*(mp[x]-1)/2;
            mp[x]=0;
        }
    }
    cout << tmp;
}
