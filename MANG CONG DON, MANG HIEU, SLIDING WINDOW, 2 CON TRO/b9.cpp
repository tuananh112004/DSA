#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,k; cin >> n >>k;
    int a[n];
    for(int i=0;i<n;i++){
        cin >> a[i];
    }
    multiset<int> ms;
    int l=0;
    int ans=0;
    for(int i=0;i<n;i++){
        ms.insert(a[i]);
        while(*ms.rbegin()-*ms.begin()>k){
            auto it=ms.find(a[l]);
            ms.erase(it);
            l++;
        }
        ans+=i-l+1;
    }
    cout << ans;
}
