#include<bits/stdc++.h>
using namespace std;
bool f[10001];
int main(){
    int n; cin >> n;
    int a[n];
    int tmp=0;
    for(auto &x:a){
        cin >> x;
        tmp+=x;
    }
    memset(f,false,sizeof(f));
    f[0]=true;
    for(int i=0;i<n;i++){
        for(int j=tmp;j>=a[i];j--){
            if(f[j-a[i]]){
                f[j]=true;
            }
        }
    }
    for(int i=0;i<=tmp;i++){
        if(f[i]) cout << i <<" ";
    }
}
