#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,k; cin >> n >>k;
    int a[n];
    for(int &x:a){
        cin >> x;
    }
    map<int,int> mp;
    long long res=0;
    int l=0;
    for(int i=0;i<n;i++){
        mp[a[i]]++;
        while(mp.size()>k){
            mp[a[l]]--;
            if(mp[a[l]]==0){
                mp.erase(a[l]);
            }
            l++;
        }
        res+=i-l+1;
    }
    cout << res;
}
