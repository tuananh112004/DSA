#include<bits/stdc++.h>
using namespace std;
long long cnt[1000007];
int main(){
    int n,m; cin >> n >>  m;
    long long a[n],b[m];
    for(int i=0;i<n;i++){
        cin >>a[i];
        cnt[a[i]]++;
    }
    for(int i=0;i<m;i++){
        cin >> b[i];
    }
    long long res=0;
    for(int i=0;i<m;i++){
        res+=cnt[b[i]];
    }
    cout << res;
}

