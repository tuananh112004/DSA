#include<bits/stdc++.h>
using namespace std;
struct node{
    int data;
    node *left;
    node *right;
    node(int v){
        data=v;
        left=right=NULL;
    }
};
void makeRoot(node *root, int u, int v, char c){
    if(c=='L') root->left =new node(v);
    else root->right =new node(v);
}
void insertRoot(node *root, int u, int v, char c){
    if(root==NULL) return;
    if(root->data ==u) makeRoot(root,u,v,c);
    else{
        insertRoot(root->left ,u,v,c);
        insertRoot(root->right ,u,v,c);
    }
}
void inorder(node *root){
    stack<node*> st,st1;
    st.push(root);
    while(!st.empty()|| !st1.empty()){
        while(!st.empty()){
            node *tmp=st.top();st.pop();
            cout << tmp->data <<" ";
            if(tmp->right !=NULL) st1.push(tmp->right);
            if(tmp->left !=NULL) st1.push(tmp->left );
        }
        while(!st1.empty()){
            root=st1.top();st1.pop();
            cout << root->data <<" ";
            if(root->left !=NULL) st.push(root->left );
            if(root->right !=NULL) st.push(root->right);
        }
    }
    
}
int main(){
    node *root=NULL;
    int n; cin >> n;
    for(int i=0;i<n;i++){
        int u,v; char c;
        cin >> u >> v >> c;
        if(root==NULL){
            root=new node(u);
            makeRoot(root,u,v,c);;
        }
        else{
            insertRoot(root,u,v,c);
        }
    }
    inorder(root);
}
