#include<bits/stdc++.h>
using namespace std;
int n,a[100],x[100];
int dem=0;

vector<string> v;
void sinh(int i, int bd){
    for(int j=bd;j<=n;j++){
        if(a[j]>(x[i-1])){
            x[i]=a[j];
            
            if(i>=2){
                string tmp="";
                for(int k=1;k<=i;k++){
                    tmp+=to_string(x[k])+" ";
                }
                v.push_back(tmp);
            }
            sinh(i+1,j+1);
            
    }
        
    }
}
int main(){
    cin >> n;
    for(int i=1;i<=n;i++){
        cin >> a[i];
    }
    x[0]=0;
    sinh(1,1);
    sort(v.begin(),v.end());
    for(auto x: v){
            cout << x <<endl;
        }
    
}
