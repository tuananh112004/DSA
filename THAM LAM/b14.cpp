#include<bits/stdc++.h>
using namespace std;
int a[257];
int main(){
    int n,k,s;
    cin >> n >> k >> s;
    if(n*(k-k/7)<k*s){
        cout <<"-1";
        return 0;
    }
    if(n==s){
        cout << k;
    }
    else{
        int toida=n*(k-k/7);
        int tieu=k*s;
        int x=(toida-tieu)/n;
        cout << k-k/7-x;
    }
}
