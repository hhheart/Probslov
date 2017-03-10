#include <iostream>
#include <string>
using namespace std;
int size=0;
struct List{	
	int data;
	List *next;
};
void print_list(List *node){
	while (node!=NULL){
		cout << node->data << endl;
		node=node->next;
	}
}
void Insert_Node(List *node, int val){
	List *temp= new List;
	temp->data=val; temp->next=node->next;
	node->next=temp;
	++size;
}
void Delete_Node(List *head, int pos){
	List *current=head, *prev; int i=0;
	if (pos <= size){
		while(i < pos){
			prev = current;
			current = current->next; i++;
		}
		prev->next=current->next;
		delete current; --size;
	}
}
int main(){
	List *root = new List;
	root->data=0;root->next=0;
	char cmd; int Ncmd,param; cin >> Ncmd;
	for (int i=0; i<Ncmd; i++){
		cin >> cmd >> param;
		if (cmd == 'I'){
			Insert_Node(root,param);
		}
		else if(cmd == 'D'){
			Delete_Node(root, param);
		}
	}
	print_list(root->next);
}