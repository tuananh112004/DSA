#include<bits/stdc++.h>
using namespace std;
int tien[]={1000,500,200,100,50,20,10,5,2,1};
int main(){
    long long n; cin >> n;
    int dem=0;
    int index=0;
    while(n){
        dem+=n/tien[index];
        n=n%tien[index];
        index++;
    }
    cout << dem;
}
