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
void makeRoot(node *root, int u, int v, char x){
    if(x=='L') root->left =new node(v);
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
int docao(node *root){
    if(root==NULL) return -1;
    return max(docao(root->left )+1,docao(root->right )+1);
}
int main(){
    node *root=NULL;
    int n;cin >> n;
    for(int i=0;i<n;i++){
        int u,v; char c;
        cin >> u >> v >> c;
        if(root==NULL){
            root=new node(u);
            makeRoot(root,u,v,c);
        }
        else{
            insertRoot(root,u,v,c);
        }
    }
    cout << docao(root);
}
