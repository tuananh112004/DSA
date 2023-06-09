#include<bits/stdc++.h>
using namespace std;
string s;
int n,m,a[100][100];
int dem=0;
void sinh(int i, int j){
    if(i==(n-1)&&j==(m-1)){
        dem++;
    }
    if(i+1<n&&a[i+1][j]){
        sinh(i+1,j);
    }
    if(j+1<m&&a[i][j+1]){
        sinh(i,j+1);
    }
}
    
int main(){
     cin >> n >> m;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin >> a[i][j];
        }
    }
    sinh(0,0);
    cout << dem;
}
