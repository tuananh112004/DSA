#include<bits/stdc++.h>
using namespace std;
int n,x[100];
bool a[10];
void sinh(int i){
    for(int j=1;j<=n;j++){
        if(!a[j]&&abs(j-x[i-1])>1){
            x[i]=j;
            a[j]=true;
            if(i==n){
                for(int k=1;k<=n;k++){
                    cout << x[k];
                }
                cout << endl;
            }
            else{
                sinh(i+1);
            }
            a[j]=false;
        }
    }
}

int main(){
     cin >> n;
     x[0]=-2;
     sinh(1);
}
