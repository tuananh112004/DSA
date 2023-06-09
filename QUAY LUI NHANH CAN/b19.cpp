#include<bits/stdc++.h>
using namespace std;
int a[100],x[100],n;
vector<vector<int>> v;
void sinh(int i, int indx, int sum){
    for(int j=indx;j<n;j++){
        sum+=a[j];
        x[i]=a[j];
        if(sum%2==1){
            vector<int> tmp(x+1,x+i+1);
            v.push_back(tmp);
}
            sinh(i+1,j+1,sum);
        sum-=a[j];
    }
}


int main(){
    cin >> n;
    for(int i=0;i<n;i++){
    cin >> a[i];}
    sinh(1,0,0);
    sort(v.begin(),v.end());
    if(v.empty()){
        cout <<"NOT FOUND";
}
    else{
    for(auto x:v){
        for(auto it:x){
            cout << it <<" ";
        }
        cout << endl;
    }
    }
    
}
