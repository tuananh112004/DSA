#include<bits/stdc++.h>
using namespace std;
bool cmp(pair<int,int> a, pair<int,int> b){
    return a.second<b.second;
}
int main(){
    int n;
    cin >> n;
    vector<pair<int,int>> v;
    while(n--){
        pair<int,int> p;
        cin >> p.first >>p.second;
        v.push_back(p);
    }
    sort(v.begin(),v.end(),cmp);
    int dem=1;
 pair<int,int> tmp;
    tmp=v[0];
    for(int i=1;i<v.size();i++){
        if(v[i].first>tmp.second){
            dem++;
            tmp=v[i];
        }
    }
    cout << dem;
}
