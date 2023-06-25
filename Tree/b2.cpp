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
    if(c=='L') root->left = new node(v);
    else root -> right=new node(v);
}
void insertRoot(node *root, int u, int v, int c){
    if(root==NULL) return;
    if(root->data ==u) makeRoot(root,u,v,c);
    else{
        insertRoot(root->left ,u,v,c);
        insertRoot(root->right ,u,v,c);
    }
}
void pre_inorder(node *root){
    if(root==NULL) return;
    cout << root->data  <<" ";
    pre_inorder(root->left );
    pre_inorder(root->right );
}
int main(){
    node *root=NULL;
    int n; cin >> n;
    for(int i=0;i<n;i++){
        int u,v; char c;
        cin >> u >> v >> c;
        if(root==NULL){
            root =new node(u);
            makeRoot(root,u,v,c);
        }
        else{
            insertRoot(root,u,v,c);
            
        }
    }
    pre_inorder(root);
}
