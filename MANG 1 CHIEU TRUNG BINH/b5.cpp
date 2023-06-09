#include<bits/stdc++.h>
using namespace std;
int main(){
    int n; cin >> n;
    int a[n];
    for(int i=0;i<n;i++){
        cin >> a[i];
    }
    cout << a[1]-a[0] <<" "<<a[n-1]-a[0] << endl;
    for(int i=1;i<n-1;i++){
        if(a[i+1]-a[i]<a[i]-a[i-1]){
            cout << a[i+1]-a[i] <<" ";
        }
        else cout <<a[i]-a[i-1] <<" ";
        if(a[i]-a[0]>a[n-1]-a[i]){
            cout << a[i]-a[0] << endl;
        }
        else cout <<a[n-1]-a[i] << endl;
        
    }
    cout << a[n-1]-a[n-2] <<" "<<a[n-1]-a[0];
}
