#include <iostream>
#include <list>
using namespace std;
void Print(list<int> head[], int size){
	for (int j=0; j<size; j++){
		list<int>::iterator i;
		for( i = head[j].begin(); i!=head[j].end(); i++)
			cout << *i << endl;
	}
}
void Insert(list<int> head[], int number, int ccla){
	head[ccla-1].push_back(number);
}
void Move(list<int> head[], int ccla1,int ccla2){
	list<int>::iterator i;
	for(i=head[ccla1-1].begin(); i!=head[ccla1-1].end(); i++)
		Insert(head,*i,ccla2);
	head[ccla1-1].clear();
}
int main(){
	int n,p1,p2,max_ccla=1; char cmd; 
	list<int> *train;
	cin >> n;
	train = new list<int> [100000];
	for (int i=0; i<n; i++){
		cin >> cmd >> p1 >> p2;
		switch(cmd){
			case 'M':
				Move(train,p1,p2);
				if (p2 > max_ccla) max_ccla=p2;
				break;
			case 'N':
				Insert(train,p1,p2);
				if (p2 > max_ccla) max_ccla=p2;
				break;
			default:
				break;
		}
	}
	Print(train,max_ccla);
}