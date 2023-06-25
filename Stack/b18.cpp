#include<bits/stdc++.h>
using namespace std;

void smaller_right(int a[], int n, int r[]){
    stack<int> st;
    for(int i=0;i<n;i++){
        while(!st.empty()&&a[i]<a[st.top()]){
            r[st.top()]=i;
            st.pop();
        }
        st.push(i);
    }
    while(!st.empty()){
        r[st.top()]=-1;
        st.pop();
    }
}
void greater_right(int a[], int n, int gr[]){
    stack<int> st;
    for(int i=0;i<n;i++){
        while(!st.empty()&&a[i]>a[st.top()]){
            gr[st.top()]=i;
            st.pop();
        }
        st.push(i);
    }
    while(!st.empty()){
        gr[st.top()]=-1;
        st.pop();
    }
}
int main(){
    int n; cin >> n;
    int a[n],gr[n],r[n];
    for(int &x:a) cin >> x;
    greater_right(a,n,gr);
    smaller_right(a,n,r);
    long long ans=0;
    for(int i=0;i<n;i++){
        if(gr[i]!=-1&&r[gr[i]]!=-1)
        cout << a[r[gr[i]]] <<" ";
        else cout <<"-1" <<" ";
    }
    
}

