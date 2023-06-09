#include<bits/stdc++.h>
using namespace std;
using ll=long long;
int main(){
    ll n ; cin >> n;
    set<int> se;
    int mu=0,tmp=0;

    for(int i=2;i<=sqrt(n);i++){
        int dem=0;
        if(n%i==0){
            tmp++;
            while(n%i==0){
                dem++;
                    n/=i;
                    if(dem>=6){
                    cout <<"YES";
                    return 0;
                }
            }
            mu+=dem;
        }
    }
        if(n!=1){
            tmp++;
            mu++;
        }
        if(tmp>=2&&mu>=4){
            cout <<"YES";
            return 0;
        }
        if(tmp>=3){
            cout <<"YES";
            return 0;
        }
    cout <<"NO";
}
