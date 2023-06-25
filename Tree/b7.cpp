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
set<int> se;
void check(node *root, int cnt){
    if(root==NULL) return;
    if(root->left ==NULL&&root->right ==NULL){
        se.insert(cnt);
    }
    check(root->left ,cnt+1);
    check(root->right ,cnt+1);
}
void inorder(node *root){
    if(root==NULL)return;
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
            makeRoot(root,u,v,c);;
        }
        else{
            insertRoot(root,u,v,c);
        }
    }
    check(root,0);
    if(se.size()==1) cout <<"YES";
    else cout <<"NO";
}
