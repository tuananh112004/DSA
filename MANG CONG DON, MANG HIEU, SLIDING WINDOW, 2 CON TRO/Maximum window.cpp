#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,k; cin >> n >>k;
    int a[n];
    for(int i=0;i<n;i++){
        cin >> a[i];
    }
    multiset<long long> ms;
    for(int i=0;i<k;i++){
        ms.insert(a[i]);
    }
    cout << *ms.begin() <<" "<<*ms.rbegin() <<endl;
    for(int i=k;i<n;i++){
        auto it=ms.find(a[i-k]);
        ms.erase(it);
        ms.insert(a[i]);
        cout << *ms.begin() <<" "<<*ms.rbegin() <<endl;
    }
}
