#include<bits/stdc++.h>
using namespace std;
int main(){
    int n; cin >> n;
    int tmp1=0,tmp2=0,tmp3=0;
    while(n--){
        int x; cin >> x;
        
        if(x==25){
            tmp1++; 
        }
        else if(x==50){
            if(tmp1==0){
                cout <<"NO";
                return 0;
            }
            else {
            tmp1--;
            tmp2++;}
        }
        else{
            if(tmp1>0&&tmp2>0){
                tmp3++;
                tmp1--;
                tmp2--;
            }
            else if(tmp1>2){
                tmp3++;
                tmp1-=3;
            }
            else{
             cout <<"NO";
             return 0;}
        }
    }
    cout <<"YES";
    
}
