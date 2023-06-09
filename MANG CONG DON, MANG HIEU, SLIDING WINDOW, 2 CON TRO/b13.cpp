#include<bits/stdc++.h>
using namespace std;
char a[1000006];
int main(){
    string s;
    cin >>s;
    int x,y;
    cin >> x >> y;
    int res=0;
    int a=0,b=0;
    int l=0;
    map<char,int> mp;
    for(auto i=0;i<s.size();i++){
        mp[s[i]]++;
        while(mp['2']>x||mp['8']>y){
            mp[s[l]]--;
            l++;
        }
            res=max(res,i-l+1);
    }
    cout << res;
}
