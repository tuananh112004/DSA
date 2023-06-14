#include<bits/stdc++.h>
using namespace std;
bool cmp(string a, string b){
    int x=a.size();int y=b.size();
    if(x!=y) return x<y;
    else return a<b;
}
int main(){
    string s;
    getline(cin,s);
    stringstream ss(s);
    string t;
    multiset<string> ms;
    vector<string> v;
    while(ss>>t){
        ms.insert(t);
        v.push_back(t);
    }
    sort(v.begin(),v.end(),cmp);
    for(auto it:ms){
        cout << it<<" ";
    }
    cout << endl;
    for(auto it:v) cout << it <<" ";
}
