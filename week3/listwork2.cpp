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
int main(){
	List *root = new List;
	root->data=0;root->next=0;
	char cmd; int Ncmd,param; cin >> Ncmd;
	for (int i=0; i<Ncmd; i++){
		cin >> cmd >> param;
		switch(cmd){
			case 'I':
				Front_Add(root,param);
				break;
			case 'D':
				Delete_Node(root, param);
				break;
			case 'A':
				Tail_Add(root,param);
				break;
		}
	}
	print_list(root->next);
}