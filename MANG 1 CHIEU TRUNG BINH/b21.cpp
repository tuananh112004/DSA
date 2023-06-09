#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    int dem=0;
    int chan=0,le=0;
    while(cin>>n){
        dem++;
        if(n%2==0) chan++;
        else if(n%2!=0) le++;
    }
    if((dem%2==0&&chan>le)||(dem%2!=0)&&le>chan) cout <<"YES";
    else cout <<"NO";
    
        

}
