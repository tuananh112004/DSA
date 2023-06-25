#include<bits/stdc++.h>
using namespace std;
stack<int> st;
void Next_Greater_element(int a[], int n, int parent[]){
    for(int i=0;i<n;i++){
        while(!st.empty()&&a[i]>a[st.top()]){
            parent[st.top()]=a[i];
            st.pop();
        }
        st.push(i);
    }
}


int main(){
    int n; cin >> n;
    int a[n],parent[n]={0};
    for(auto &x:a) cin >> x;
    Next_Greater_element(a,n,parent);
    for(auto x:parent){
        if(x==0){
            cout <<"-1"<<" ";
        }
        else cout << x <<" ";
    }
}
