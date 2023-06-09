#include<bits/stdc++.h>
using namespace std;
int n,k,a[100],x[100];
vector<string> v;
void sinh(int i, int bd,int sum){
    for(int j=bd;j<=n;j++){
        if(sum+a[j]<=k){
            x[i]=a[j];
            if(sum+a[j]==k){
                string tmp="";
                for(int z=1;z<=i;z++){
                    tmp+=to_string(x[z])+" ";
                }
                tmp.pop_back();
                v.push_back(tmp);
            }
            else{
                sinh(i+1,j,sum+a[j]);
            }
        }
    }
}

int main(){
    cin >> n >> k;
    for(int i=1;i<=n;i++) cin >> a[i];
    sort(a+1,a+n+1);
    sinh(1,1,0);
    if(v.size()==0){
        cout <<"-1";
    }
    else{
        cout <<v.size()<< endl;
        for(auto x:v){
            cout <<"{"<<x<<"}"<< endl;
        }
    }
}
