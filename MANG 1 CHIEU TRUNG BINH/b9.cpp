#include<bits/stdc++.h>
using namespace std;
int main(){
     int n; cin >> n;
     int a[n];
     map<int,int> mp;
     map<int,int>mp1;
     for(int i=0;i<n;i++){
         cin >> a[i];
         mp[a[i]]++;
         mp1[a[i]]++;
     }
     for(auto x:mp){
         if(x.second!=0){
             cout << x.first <<" "<<x.second<< endl;
             x.second=0;
         }
     }
    cout << endl;
     for(auto x:a){
         if(mp1[x]!=0){
             cout << x << " "<<mp1[x] << endl;
             mp1[x]=0;
         }
     }
}
