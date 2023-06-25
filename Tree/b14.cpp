#include<bits/stdc++.h>
using namespace std;
int parent[10001];
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
int ans=0,tmp;
void height(node *root,int cnt){
    if(root==NULL) return;
    if(root->left !=NULL)parent[root->left->data ]=cnt ;
    if(root->right !=NULL)parent[root->right->data  ]=cnt;
    height(root->left ,cnt+1);
    height(root->right ,cnt+1);
}
void BFS(node *root){
    queue<node*> q;
    q.push(root);
    while(!q.empty()){
        node *tmp=q.front(); q.pop();
        cout << parent[tmp->data] <<" ";
        if(tmp->left !=NULL) q.push(tmp->left );
        if(tmp->right !=NULL) q.push(tmp->right );
    }
}
int main(){
    node *root=NULL;
    input(root);
    int cnt=1;
    height(root,cnt);
    BFS(root);
}
