#include<bits/stdc++.h>
using namespace std;
int main(){
     int n,m; cin >> n >>m;
     int a[n],b[m];
     map<int,int> mp;
     set<int> s;
     for(int i=0;i<n;i++){
         cin >>a[i];
         mp[a[i]]++;
         s.insert(a[i]);
     }
     for(int i=0;i<m;i++){
         cin >> b[i];
         s.insert(b[i]);
     }
     sort(b,b+m);
     for(int i=0;i<m;i++){
         if(mp[b[i]]!=0){
             cout <<  b[i] <<" ";
             mp[b[i]]=0;
         }
     }
     cout << endl;
     for(auto x:s){
         cout << x<<" ";
     }
}
