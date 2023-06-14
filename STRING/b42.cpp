#include<bits/stdc++.h>
using namespace std;
int main(){
    string a;
    cin >> a ;
    long long s; cin >> s;
    long long sum =0;
    for(int i=0;i<a.size();i++){
        sum=sum*10+(a[i]-'0');
        sum%=s;
    }
    cout << sum;
}
