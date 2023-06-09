#include<bits/stdc++.h>
using namespace std;
int cnt[256];
int main(){
    string s; cin >> s;
    int ans=0;
    int l=0;
    for(int i=0;i<s.size();i++){
        cnt[s[i]]++;
        if(cnt[s[i]]==1){
            ans=max(ans,i-l+1);
        }
        else{
            while(cnt[s[i]]>1){
                cnt[s[l]]--;
                l++;
            }
        }
    }
    cout << ans;
}
