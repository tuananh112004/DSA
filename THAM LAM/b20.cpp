#include<bits/stdc++.h>
using namespace std;
using ll=long long;
int cnt[10000];
int main(){
   int n; cin >> n;
   vector<int> a,b;
   while(n--){
           int x; cin >> x;
           if(x%2==0){
               a.push_back(x);
        }
        else{
            b.push_back(x);
        }
       }
       sort(a.begin(),a.end());
       sort(b.begin(),b.end());
       if(a.size()%2==0){
           cout << "YES";
    }
    else{
        for(int i=0;i<a.size();i++){
            for(int j=0;j<b.size();j++){
                if(abs(a[i]-b[j])==1){
                    cout <<"YES";
                    return 0;
                }
            }
        }
        cout <<"NO";
    }    
}
