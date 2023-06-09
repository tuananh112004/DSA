#include<bits/stdc++.h>
using namespace std;
int cnt[256];
int main(){
    string s; cin >> s;
    map<char,int> mp;
    for(int i=0;i<s.size();i++){
        mp[s[i]]++;
    }
    int k=mp.size();
    int l=0;
    int ans=1e7;
    int dem=0;
    for(int i=0;i<s.size();i++){
        cnt[s[i]]++;
        if(mp[s[i]]&&cnt[s[i]]==1){
            dem++;
        }
        if(dem==k){
            while(true){
                if(cnt[s[l]]-1!=0){
                    cnt[s[l]]--;
                    l++;
                }
                else break;
            }
            ans=min(ans,i-l+1);
        }
    }
    cout << ans;
}
