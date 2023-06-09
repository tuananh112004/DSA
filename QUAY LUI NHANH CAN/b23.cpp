#include<bits/stdc++.h>
using namespace std;
string s;
string tmp;
set<string> v;
void sinh(int i, int index){
    for(char j:{tolower(s[index]),toupper(s[index])}){
        tmp+=j;
        if(i==s.size()){
           v.insert(tmp);
        }
        else{
            sinh(i+1,index+1);
        }
        tmp.pop_back();
    }
}
int main(){
    cin >> s;
    sinh(1,0);
    for(auto x: v){
        cout << x <<endl;
    }
}
