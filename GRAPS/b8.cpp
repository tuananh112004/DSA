#include<bits/stdc++.h>
using namespace std;
struct so{
    int s1,s2,s3;
};
int main(){
    int n; cin >> n;
    vector<so> v;
    int a[n+1][n+1];
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            cin >> a[i][j];
            if(a[i][j]!=0&&i<j){
                so tmp;
                tmp.s1 =i;
                tmp.s2 =j;
                tmp.s3 =a[i][j];
                v.push_back(tmp);
            }
        }
    }
    for(so x:v){
        cout << x.s1 <<" "<< x.s2 <<" "<< x.s3 << endl;
    }
}
