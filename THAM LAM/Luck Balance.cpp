#include<bits/stdc++.h>
using namespace std;
struct asd{
    int lu,im;
};
bool cmp(asd a, asd b){
    return a.lu >b.lu ;
}
int main(){
    int n,k; cin >> n >> k;
    asd a[n];
    vector<asd> v;
    long long sum=0;
    for(int i=0;i<n;i++){
        cin >>a[i].lu >>a[i].im ;
        if(a[i].im ==1){
            v.push_back(a[i]);
        }
        else{
            sum+=a[i].lu ;
        }
    }
    sort(v.begin(),v.end(),cmp);
    int dem=1;
    for(int i=0;i<v.size();i++){
        if(dem<=k){
            sum+=v[i].lu;
            dem++;
        }
        else{
            sum-=v[i].lu;
        }
    }
    cout << sum;
}

