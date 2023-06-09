#include<bits/stdc++.h>
using namespace std;
string s; int i,j,n;
int a[100][100];
bool b[100][100];
bool check=true;
void tri(string s, int i, int j){
        if(b[i][j]==false){
            b[i][j]=true;
            if(i==n-1&&j==n-1){
                cout << s << endl;
                check=false;
            }
            else{
                if(i+1<n&&a[i+1][j]==1){
                    tri(s+'D',i+1,j);
                }
                if(j+1<n&&a[i][j+1]==1){
                    tri(s+'R',i,j+1);
                }
                if(i-1>=0&&a[i-1][j]==1){
                    tri(s+'U',i-1,j);
                }
                if(j-1>=0&&a[i][j-1]==1){
                    tri(s+'L',i,j-1);
                }
            }
            b[i][j]=false;
        }
}


int main(){
     cin >> n;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin >> a[i][j];
        }
    }
    tri("",0,0);
    if(check) cout <<"-1";
}
