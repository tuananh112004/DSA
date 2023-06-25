#include<bits/stdc++.h>
using namespace std;
using ll=long long;
long long ans[1000001];
vector<string> v;
bool cmp(string a, string b){
    if(a.size()!=b.size()) return a.size()>b.size();
    else{
        return stoll(a)>stoll(b);
    }
}
void in(int x){
    for(auto z:v){
        if(z.size()<=x){
            cout << z << " ";
        }
    }
}
int main(){
    queue<string > q;
    q.push("6");
    q.push("8");
    while(1){
        string x=q.front();q.pop();
        if(x.size()>18) break;
        q.push(x+"6");
        q.push(x+"8");
        v.push_back(x);
    }
    int n; cin >> n;
    sort(v.begin(),v.end(),cmp);
    while(n--){
        int x; cin >> x;
        in(x); cout << endl;
    }
    
}

