#include<bits/stdc++.h>
using namespace std;
int cnt1[256];
int cnt2[256];
int main(){
    string s,t; cin >> s >> t;
    int dem1=0;
    for(char x:t){
        cnt1[x]++;
        if(cnt1[x]==1) dem1++;
    }
    int l=0;
    int ans=1e9;
    int index=0;
    int dem2=0;
    for(int i=0;i<s.size();i++){
        cnt2[s[i]]++;
        if(cnt1[s[i]]&&cnt2[s[i]]==cnt1[s[i]]){
            dem2++;}
        if(dem1==dem2){
            while(true){
                if(cnt2[s[l]]-1>=cnt1[s[l]]){
                    cnt2[s[l]]--;
                    l++;
                }
                else break;
            }
            if(i-l+1<ans){
                ans=i-l+1;
                index=l;
            }
            
        }
    }
    
    for(int i=index;i<index+ans;i++){
        cout << s[i];
    }

}
