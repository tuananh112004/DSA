#include<bits/stdc++.h>
using namespace std;
vector<string> v;
string tmp="";
int n,k;
void sinh(int i, int index, int sum){
    for(int j=index;j<=9;j++){
        sum+=j;
        tmp+=to_string(j);
        if(sum==n&&i==k){
            v.push_back(tmp);
        }
        else{
            sinh(i+1,j+1,sum);
        }
        sum-=j;
        tmp.pop_back();
    }
}
int main(){
    cin >> n >> k;
    sinh(1,1,0);
    sort(v.begin(),v.end());
    if(v.size()==0) cout <<"NOT FOUND";
    else{
        for(auto x:v){
            for(int i=0;i<x.size();i++){
                if(i==x.size()-1){
                    cout << x[i] ;
                }
                else{
                    cout <<x[i]<<" + ";
                }
            }
            cout << endl;
        }
    }
}
