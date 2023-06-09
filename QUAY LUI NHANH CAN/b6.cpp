#include<bits/stdc++.h>
using namespace std;
int dem =0;
int n;
int cheo1[100],cheo2[100],cot[100];
void tri(int i){
    for(int j=1;j<=n;j++){
        if(cheo1[i-j+n]==0&&cheo2[i+j-1]==0&&cot[j]==0){
            cheo1[i-j+n]=1;cheo2[i+j-1]=1;cot[j]=1;
            if(i==n){
                dem++;
            }
            else{
                tri(i+1);
            }
            cheo1[i-j+n]=0;cheo2[i+j-1]=0;cot[j]=0;
        }
        
    }
    
}
int main(){
    cin >> n;
    tri(1);
    cout << dem;
}
