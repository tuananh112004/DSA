#include<bits/stdc++.h>
using namespace std;
int n,m;
long long a[100][100];

int dx[8]={-1,-1,-1,0,1,1,1,0};
int dy[8]={-1,0,1,-1,-1,0,1,1};
bool check(int i, int j){
    for(int k=0;k<8;k++){
        int i1=i+dx[k];
        int j1=j+dy[k];
        if(i1>=0&&i1<n&&j1>=0&&j1<m){
            if(a[i][j]<=a[i1][j1]) return false;
        }
    }
    return true;
}



    int main(){
         cin >> n >>m;
         for(int i=0;i<n;i++){
             for(int j=0;j<m;j++){
                 cin >> a[i][j];
             }
         } 
         int dem=0;
          for(int i=0;i<n;i++){
             for(int j=0;j<m;j++){
                 if(check(i,j)) dem++;
             }
         } 
         cout << dem;
    }
