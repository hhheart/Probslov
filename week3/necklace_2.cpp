#include <iostream>
#include <vector>
using namespace std;

void PrintALL(vector<int> v[], int n){
	for (int i=0; i<n; i++){
		cout << "necklace: " << i << endl;
		for (int j=0; j<v[i].size(); j++){
			cout << v[i][j] << " ";
		}
		cout << endl;
	}
}
void INIT(vector<int> v[], int n){
	cout << "////// init necklace ///////" << endl;
	for (int i=0; i<n; i++){
		v[i].push_back(i+1);
		cout << v[i].front() << endl;
	}
	cout << "////// end init necklace //////" << endl;;
}
void Insert(vector<int> v[], int src, int des){
/*	src-=1; des-=1;
	vector<int>::iterator it1;
	vector<int>::iterator it2;
	for (it1=v[des].begin(); it1!=v[des].end(); ++it1){
		cout << "fucking cat" << endl;
		cout << src << "and" << *it1 << endl;
		if (*it1 == des+1){
			++it1;
			cout << "cat" << endl;
			for (it2=v[src].begin(); it2!=v[src].end(); ++it2){
				v[des].insert(it1, *it2);
				cout << "dog" << endl;
			}
			break;
		}
	}*/
	vector<int>::iterator it;
	vector<int>::iterator it2; 
	for(it2=v[des-1].begin(); it2!=v[des-1].end(); ++it2){
		if ((int)*it2 == des){
			++it2;
			for(it=v[src-1].begin(); it!=v[src-1].end(); ++it){
				v[des-1].insert(it2,*it);
			}
			break;
		}
	}
}
int main(){
	int N, p1, p2;
	vector<int> *necklace;
	cin >> N;
	necklace = new vector <int> [N];
	INIT(necklace,N);
	for (int i=0; i<N-1; i++){
		cin >> p1 >> p2;
		Insert(necklace, p1, p2);
	}
	PrintALL(necklace, N);
}