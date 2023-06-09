#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    int dem=0;
    int chan=0,le=0;
    while(cin>>n){
        dem++;
        if(n%2==0) chan++;
        else if(n%2!=0) le++;
    }
    if((dem%2==0&&chan>le)||(dem%2!=0)&&le>chan) cout <<"YES";
    else cout <<"NO";
    
        

}#include<bits/stdc++.h>
using namespace std;
int main(){
    int n; cin >> n;
    int a[n];
    map<int,int>mp;
    for(int i=0;i<n;i++){
        cin >> a[i];
    }
    for(int i=0;i<n;i++){
        mp[a[i]]++;
        if(mp[a[i]]>1){
            cout << a[i];
            return 0;
        }
    }
    cout <<"-1";
} 
