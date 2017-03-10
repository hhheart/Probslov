#include <iostream>

using namespace std;

int main(){

	int N=0,weight=1000,truck=1; cin >> N;
	int arry [N];
	for (int i=0; i<N; i++){
		cin >> arry[i];
	}
	for (int j=0; j<N; j++){
		if (weight-arry[j]>=0){
			weight-=arry[j];
		}
		else{
			truck++;
			weight=1000;
			weight-=arry[j];
		}
	}
	cout << truck << endl;
}