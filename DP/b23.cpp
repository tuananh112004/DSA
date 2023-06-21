#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin >> s;
    int n=s.size();
    s="@"+s;
    int f[n+1][n+1];
    memset(f,false,sizeof(f));
    int ans=0;
    for(int i=1;i<=n;i++) f[i][i]=true;
    for(int len=2;len<=n;len++){
        for(int i=1;i<=n-len+1;i++){
            int j=i+len-1;
            if(len==2){
                f[i][j]=(s[i]==s[j]);
            }
            else{
                f[i][j]=(s[i]==s[j])&&f[i+1][j-1];
            }
            if(f[i][j]){
                ans=max(ans,len);
            }
        }
    }
    cout << ans;
}
