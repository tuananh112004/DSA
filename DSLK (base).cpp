#include <bits/stdc++.h>
using namespace std;

using ll = long long;

struct node{
	int data;
	node *next;
};

//ham xin cap phat 1 node moi 
node* makeNode(int x){
	node *newNode = new node;
	//cout << "Gia tri cua node moi duoc cap phat la : " << newNode << endl;
	newNode->data = x;
	newNode->next = NULL;
	return newNode;
}

//Them node vao dau DSLK
void themdau(node *&head, int x){
	//tao ra 1 node moi co data la x, sau do them vao dau dslk
	node *newNode = makeNode(x);
	//cho newNode tro vao head
	newNode->next = head;
	head = newNode;
}

void duyet(node *head){
	while(head != NULL){
		cout << head->data << ' ';
		head = head->next;
	}
	cout << endl;
}

int count(node *head){
	int dem = 0;
	while(head != NULL){
		++dem;
		head = head->next;
	}	
	return dem;
}

void themcuoi(node *&head, int x){
	node *newNode = makeNode(x);
	node *tmp = head; // dung de duyet
	if(tmp == NULL){
		head = newNode; return;
	}
	while(tmp->next != NULL){
		tmp = tmp->next;
	}
	tmp->next = newNode;
}

void themgiua(node *&head, int x, int k){
	int n = count(head);
	if(k < 1 || k > n + 1){
		return;
	}
	node *newNode = makeNode(x);
	if(k == 1){
		themdau(head, x); return;
	}
	node *tmp = head;
	for(int i = 1; i <= k - 2; i++){
		tmp = tmp->next;
	}
	//cho newNode luu dia chi cua node thu k
	newNode->next = tmp->next;
	tmp->next = newNode;
}

void xoadau(node *&head){
	if(head == NULL) return;
	node *deleteNode = head;
	head = head->next; 
	delete deleteNode;
}

void xoacuoi(node *&head){
	if(head == NULL) return;
	node *tmp = head;
	if(head->next == NULL){
		node *deleteNode = head;
		head = NULL;
		delete deleteNode; return;
	}
	while(tmp->next->next != NULL){
		tmp = tmp->next;
	}
	node *deleteNode = tmp->next;
	tmp->next = NULL;
	delete deleteNode;
}

void xoagiua(node *&head, int k){
	int n = count(head);
	if(k < 1 || k > n) return;
	node *tmp = head;
	if(k == 1){
		xoadau(head); return;
	}
	for(int i = 1; i <= k - 2; i++){
		tmp = tmp->next;
	}
	node *kth = tmp->next;
	tmp->next = kth->next;
	delete kth;
}


int main(){
	node *head = NULL;
	while(true){
		cout << "-------------------------\n";
		cout << "1. Them dau\n";
		cout << "2. Them cuoi\n";
		cout << "3. Them giua\n";
		cout << "4. Xoa dau\n";
		cout << "5. Xoa cuoi\n";
		cout << "6. Xoa giua\n";
		cout << "8. Duyet !\n";
		cout << "0. Thoat !\n";
		cout << "-------------------------\n";
		cout << "Nhap lua chon : ";
		int lc; cin >> lc;
		if(lc == 1){
			int x; cout << "Nhap gia tri can them : "; cin >> x;
			themdau(head, x);
		}
		else if(lc == 2){
			int x; cout << "Nhap gia tri can them : "; cin >> x;
			themcuoi(head, x);
		}
		else if(lc == 3){
			int x, k; cout << "Nhap gia tri can them : "; cin >> x;
			cout << "Nhap vi tri chen : "; cin >> k;
			themgiua(head, x, k);
		}
		else if(lc == 4){
			xoadau(head);
		}
		else if(lc == 5){
			xoacuoi(head);
		}
		else if(lc == 6){
			int k; cout << "Nhap vi tri xoa :"; cin >> k;
			xoagiua(head, k);
		}
		else if(lc == 8){
			duyet(head);
		}
		else if(lc == 0){
			break;
		}
	}
}
