#include<bits/stdc++.h>
using namespace std;
int n,cot[100],cheo[100],cheo2[100],x[100];
void sinh(int i){
    for(int j=1;j<=n;j++){
        if(!cheo[i-j+n]&&!cheo2[i+j-1]&&!cot[j]){
            x[i]=j;
            cheo[i-j+n]=cheo2[i+j-1]=cot[j]=1;
            if(i==n){
                for(int row=1;row<=n;row++){
                    for(int col=1;col<=n;col++){
                        if(x[row]==col){
                            cout<<"Q";
                        }
                        else{
                            cout <<".";
                        }
                    }
                    cout << endl;
                }
                cout << endl;
            }
            else{
                sinh(i+1);
            }
            cheo[i-j+n]=cheo2[i+j-1]=cot[j]=0;
        }
    }
}
int main(){
    cin >> n;
    sinh(1);
}
