#include <iostream>
#include <list>
using namespace std;
void Print(list<int> head[], int number){
	list<int>::iterator i;
	for( i = head[number-1].begin(); i!=head[number-1].end(); i++)
		cout << *i << endl;
}
void PrintAll(list<int> head[], int number){
	list<int>::iterator i;
	for (int j=0; j<number; j++){
		cout << "necklace number: " << j+1 << endl;
		for( i = head[j].begin(); i!=head[j].end(); i++)
			cout << *i << endl;
		//cout << "necklace end" << endl;
	}
}
void InitNecklace(list<int> head[], int n){
	//cout << "init node: "<< endl;
	for (int i=0; i<n; i++){
		head[i].push_back(i+1);
		//Print(head, i+1);
	}
	//cout << "end list" << endl;
}
/*void InsertNecklace(list<int> head[], int nkl1, int nkl2){
	list<int>::iterator i;
	list<int>::iterator it; 
	it = head[nkl2-1].begin(); ++it;
	for(i=head[nkl1-1].begin(); i!=head[nkl1-1].end(); i++){
		head[nkl2-1].insert(it,*i);
	}
}*/
void InsertNecklace(list<int> head[], int nkl1, int nkl2){
	list<int>::iterator i;
	list<int>::iterator it; 
	for(it=head[nkl2-1].begin(); it!=head[nkl2-1].end(); ++it){
		if ((int)*it == nkl2){
			++it;
			for(i=head[nkl1-1].begin(); i!=head[nkl1-1].end(); i++){
				head[nkl2-1].insert(it,*i);
			}
			break;
		}
	}
}
void UpdateAll(list<int> head[],int param, int number){
	list<int>::iterator i;
	for (int j=0; j<number; j++){
		for( i = head[j].begin(); i!=head[j].end(); i++){
			if((int)*i == param && param !=(j+1)){
				InsertNecklace(head, param, j);
			}
		}
	}
}
int main(){
	int n,p1,p2;
	list<int> *necklace;
	cin >> n;
	necklace = new list<int>[n];
	InitNecklace(necklace,n);
	for (int i=0; i<n-1; i++){
		cin >> p1 >> p2;
		InsertNecklace(necklace, p1, p2);
		//UpdateAll(necklace, p2, n);
	}
	PrintAll(necklace,n);
}