#include<bits/stdc++.h>
using namespace std;
string s;
int n;
vector<char> v[10];
int z=2, dem=0;
void tao(){
    for(char i='a';i<='z';i++){
        dem++;
        v[z].push_back(i);
        if(z==7||z==9){
            if(dem==4){
                z++;
                dem=0;
            }
        }
        else{
            if(dem==3){
                z++;
                dem=0;
            }
        }
    }
}
void sinh(int i, string t){
    int nnum = s[i]-'0';
    for(char x:v[nnum]){
        if(i==n){
            cout << t+x << " ";
        }
        else sinh(i+1,t+x);
        
    }
}
int main(){
    cin >> s;
    tao();
    sort(s.begin(),s.end());
    n=s.size()-1;
    string tmp="";
    sinh(0,tmp);
    
}
