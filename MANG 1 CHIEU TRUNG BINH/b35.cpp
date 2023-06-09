#include<bits/stdc++.h>
using namespace std;
int main(){
    int n; cin >> n;
    int k; cin >>k;
    int a[n];
    for(int i=0;i<n;i++){
        cin >> a[i];
    }
    sort(a,a+n);
    multiset<int> ms;
    int l=0;
    int ans=0;
    for(int i=0;i<n;i++){
        ms.insert(a[i]);
        while((*ms.rbegin()-*ms.begin())>k){
            ms.erase(ms.find(a[l++]));
        }
        ans=max(ans,i-l+1);
    }
    cout << ans;
    
} 
