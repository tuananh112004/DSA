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
            if(sum==s){#include<bits/stdc++.h>
using namespace std;
int n,a[100][100];
bool ok=false;
void tri(string s,int i,int j){
    if(i==n&&j==n){
        ok=true;
        cout << s << endl;
        return ;
    }
        if(i+1<=n&&a[i+1][j]==1){
            tri(s+"D",i+1,j);
        }
        if(j+1<=n&&a[i][j+1]==1){
            tri(s+"R",i,j+1);
        }
    
}
int main(){
    cin >> n ;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            cin >> a[i][j];
        }
    }
    tri("",1,1);
    if(ok==false) cout <<"-1";
    
}
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
