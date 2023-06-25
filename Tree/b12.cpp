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
void makeRoot(node *root,int u, int v, char c){
    if(c=='L') root->left = new node(v);
    else root->right =new node(v);
}
void insertRoot(node *root, int u, int v, char c){
    if(root==NULL) return;
    if(root->data ==u){
        makeRoot(root,u,v,c); 
    }
    else{
        insertRoot(root->left ,u,v,c);
        insertRoot(root->right ,u,v,c);
    }
}
void input(node *&root){
    int n; cin >> n;
    while(n--){
        int u,v; char c;
        cin >> u >> v >> c;
        if(root==NULL){
            root= new node(u);
            makeRoot(root,u,v,c);
        }
        else{
            insertRoot(root,u,v,c);
        }
    }
}
int inorder(node *root1, node *root2){
    if(root1==NULL&&root2==NULL) return 1;
    if(root1==NULL||root2==NULL) return 0;
    if(root1->data !=root2->data ){
        return 0;
    }
    return inorder(root1->left ,root2->left ) && inorder(root1->right, root2->right );
}
int main(){
    node *root1=NULL, *root2=NULL;
    input(root1);
    input(root2);
    inorder(root1,root2);
    if(inorder(root1,root2)){
        cout <<"YES";
    }
    else cout <<"NO";
}
