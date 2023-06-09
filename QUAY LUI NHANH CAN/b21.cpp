#include<bits/stdc++.h>
using namespace std;
char a[100][100];
bool visited[100][100];
string s,tmp="";
int n,m;
int dx[4]={1,-1,0,0};
int dy[4]={0,0,-1,1};
bool ok=false;
void sinh(int i, int j){
    if(ok) return;
    if(tmp==s){
        ok=1;
        return;
    }
    for(int k=0;k<4;k++){
        int i1=i+dx[k];
        int j1=j+dy[k];
        if(i1>=0&&i1<n&&j1>=0&&j1<m&&!visited[i1][j1]){
            tmp+=a[i1][j1];
            visited[i1][j1]=1;
            if(tmp==s){
                ok=1;
            }
            else if(s.find(tmp)!=string::npos){
                sinh(i1,j1);
            }
            tmp.pop_back();
            visited[i1][j1]=0;
        }
    }
}
int main(){
    cin >> n >> m;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin >> a[i][j];
        }
    }
    cin >> s;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(a[i][j]==s[0]){
                visited[i][j]=1;
                tmp="";
                tmp+=a[i][j];
                sinh(i,j);
                if(ok){
                    cout <<"YES";
                    return 0;
                }
            }
        }
    }
    cout <<"NO";
}
