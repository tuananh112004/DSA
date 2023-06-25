#include<bits/stdc++.h>
using namespace std;
int y[10001];
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
int n;
void input(node *&root){
    
     cin >> n;
     int tmp=n;
    while(tmp--){
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
int ans=0;
void height(node *root,int cnt){
    if(root==NULL) return;
    y[cnt ]++;
    height(root->left ,cnt+1);
    height(root->right ,cnt+1);
}

int main(){
    node *root=NULL;
    input(root);
    int cnt=0;
    height(root,cnt);
    int max_ans=0;
    for(int i=1;i<=1000;i++){
        if(y[i]!=0)
        max_ans=y[i];
        
    }
    cout << max_ans;
}
