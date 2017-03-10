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
void Tail_Add(List *head, int val){
    List *last = new List;
    last->data = val; last->next = NULL;
    if (head == NULL) {
        head = last;
    } 
    else {
        List *temp = new List;
        temp = head;
        while (temp->next != NULL) {
            temp = temp->next;
        }
        temp->next = last; ++size;
    }
}
void Front_Add(List *head, int val){
	List *temp= new List;
	temp->data=val; temp->next=head->next;
	head->next=temp;
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
void Rotate_R(List *head){
	List *temp = new List; temp=head;
	while (temp->next != NULL) {
		temp = temp->next;
	}
	Front_Add(head,temp->data);
	Delete_Node(head, size);
}
void Rotate_L(List *head){
	if (head->next != NULL){
		List *temp = new List; temp=head->next;
		Tail_Add(head,temp->data);
		Delete_Node(head, 1);	
	}
}
int main(){
	List *root = new List;
	root->data=0;root->next=NULL;
	string cmd; int Ncmd,param; cin >> Ncmd;
	for (int i=0; i<Ncmd; i++){
		cin >> cmd;
		if(cmd == "li"){
			cin >> param;
			Front_Add(root,param);
		}
		else if(cmd == "ri"){
			cin >> param;
			Tail_Add(root,param);
		}
		else if(cmd == "rr"){
			Rotate_R(root);				
		}
		else if(cmd == "lr"){
			Rotate_L(root);				
		}
	}
	print_list(root->next);
}