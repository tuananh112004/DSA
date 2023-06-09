#include<bits/stdc++.h>
using namespace std;
int a[100][100],cot[100],cheo1[100],cheo2[100];
int n;
int maxx=0;
void sinh(int i, int sum){
    for(int j=1;j<=n;j++){
        if(cot[j]==0&&cheo1[i-j+n]==0&&cheo2[i+j-1]==0){
            cot[j]=cheo1[i-j+n]=cheo2[i+j-1]=1;
            sum+=a[i][j];
            if(i==n){
                maxx=max(maxx,sum);
            }
            else{
                sinh(i+1,sum);
            }
            cot[j]=cheo1[i-j+n]=cheo2[i+j-1]=0;
            sum-=a[i][j];
        }
    }
}
int main(){
     n=8;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            cin >> a[i][j];
        }
    }
    sinh(1,0);
    cout << maxx;
}
