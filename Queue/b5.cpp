#include<bits/stdc++.h>
using namespace std;
long long ans[100001];
int main(){
    int n; cin >> n;
    queue<string> q;
    vector<long long> v;
    q.push("8");
    v.push_back(8);
    while(1){
        string tmp=q.front(); q.pop();
        if(tmp.size()>18) break;
        q.push(tmp+"0");
        q.push(tmp+"8");
        v.push_back(stoll(tmp+"0"));
        v.push_back(stoll(tmp+"8"));
    }
    sort(v.begin(),v.end());
    for(int i=1;i<=200;i++){
        for(auto j:v){
            if(j%i==0){
                ans[i]=j;
                break;
            }
        }
    }
    while(n--){
        int x; cin >> x;
        cout << ans[x] << endl;
    }
}
