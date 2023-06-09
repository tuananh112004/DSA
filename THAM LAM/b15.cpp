#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,k;
    cin >> n >> k;
    n--;
    int dem=k-1;
    int x=n/9;
    int y=n%9;
    dem-=x;
    dem--;
    if(x+1>k){
        cout <<"-1";
        return 0;
    }
    else{
        if(x+1==k){
            cout <<y+1;
            for(int i=0;i<x;i++)cout<<"9";
        }
        else{
        cout <<"1";
        for(int i=0;i<dem;i++) cout <<"0";
        cout <<y;
        for(int i=0;i<x;i++) cout <<"9";
        }
        
    }
    
}
