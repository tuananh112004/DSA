#include<bits/stdc++.h>
using namespace std;
char a[100],x[100];
int n,k;
vector<string> v;
void sinh(int i, int indx){
    for(int j=indx;j<n;j++ ){
        x[i]=a[j];
        if(i==k){
            string tmp="";
            for(int k=1;k<=i;k++){
            tmp+=x[k];
            }
            v.push_back(tmp);
        }
        else{
            sinh(i+1,j);
        }
    }
}
int main(){
    cin >> n >> k;
    for(int i=0;i<n;i++){
        cin >> a[i];
    }
    sort(a,a+n);
    sinh(1,0);
    sort(v.begin(),v.end());
    for(auto x:v){
        cout << x << endl;
    }
}
