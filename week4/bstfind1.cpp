#include <iostream>
using namespace std;

int counter=0;

bool checkbst(int arry[], int ckr){
	for (int i=0; i< counter; i++){
		if (arry[i]==ckr) return true;
	}
	return false;
}
int main(){
	int N, p1, p2; 
	cin >> N;
	int arry[N];
	for (int i=0; i<N ; i++){
		cin >> p1 >> p2;
		if (p1 == 1){
			arry[counter] = p2;
			++counter;
		}
		else if (p1 == 2){
			if (checkbst(arry, p2)) cout << 1 << endl;
			else cout << 0 << endl;
		}
	}
}