#include<bits/stdc++.h>
using namespace std;
int n,k,a[100];
bool check=false;
void tri( string s, int i, int sum){
    if(sum==k){
        s.pop_back();
        cout <<"["<< s<<"]" << endl;
        check=true;
    }
    for(int j=i;j<n;j++){
        if(sum+a[j]<=k){
            tri(s+to_string(a[j])+" ",j+1,sum+a[j]);
        }
    }
}
int main(){
    cin >> n >> k;
    for(int i=0;i<n;i++){
        cin >> a[i];
    }
    sort(a,a+n);
    tri("",0,0);
    if(check==false) cout <<"-1";
}
