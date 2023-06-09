#include<bits/stdc++.h>
using namespace std;
int n,k,s,x[100];
vector<vector<int>> v;
void tri(int i){
    for(int j=x[i-1]+1;j<=n-k+i;j++){
        x[i]=j;
        if(i==k){
            vector<int> tmp;
            int sum=0;
            for(int i=1;i<=k;i++){
                sum+=x[i];
                tmp.push_back(x[i]);
            }
            if(sum==s){
                v.push_back(tmp);
            }
        }
        else tri(i+1);
    }
}
int main(){
    cin >> n >> k >> s;
    tri(1);
    cout << v.size();
    
}
