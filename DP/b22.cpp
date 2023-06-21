#include<bits/stdc++.h>
using namespace std;
int main(){
    string s; cin >> s;
    int n=s.size();
    s="0"+s;
    long long f[n+1]={0};
    long long sum=0;
    for(int i=1;i<=n;i++){
        f[i]=f[i-1]*10+i*(s[i]-'0');
        sum+=f[i];
    }
    cout << sum;
}
