#include<bits/stdc++.h>
using namespace std;
long long gcd(long long a, long long b){
    if(b==0) return a;
    else return gcd(b,a%b);
}
int main(){
    string a;
    cin >> a ;
    long long s; cin >> s;
    long long sum =0;
    for(int i=0;i<a.size();i++){
        sum=sum*10+(a[i]-'0');
        sum%=s;
    }
    cout << gcd(sum,s);
}
