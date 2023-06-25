#include<bits/stdc++.h>
using namespace std;
struct node{
    int data;
    node *left;
    node *right;
    node(int x){
        data=x;
        left=right=NULL;
    }
};
//node *makeNode(int x){
//    node *newNode =new node;
//    newNode->left =NULL;
//    newNode->right=NULL;
//    return newNode;
//}
void makeRoot(node *root, int u, int v, char c){
    if(c=='L') root->left =new node(v);
    else root->right =new node(v);
}
void insertNode(node *root, int u, int v, char c){
    if(root==NULL) return;
    if(root->data ==u){
        makeRoot(root,u,v,c);
    }
    else{
        insertNode(root->left ,u,v,c);
        insertNode(root->right,u,v,c );
    }
}
void inorder(node *root){
    if(root==NULL) return;
    inorder(root->left );
    cout << root->data <<" ";
    inorder(root->right );
}
int main(){
    node *root=NULL;
    int n; cin >> n;
    for(int i=0;i<n;i++){
        int u,v; char c;
        cin >> u >> v >> c;
        if(root==NULL){
            root=new node(u);
            makeRoot(root,u,v,c);
        }
        else{
            insertNode(root,u,v,c);
        }
    }
    inorder(root);
}
