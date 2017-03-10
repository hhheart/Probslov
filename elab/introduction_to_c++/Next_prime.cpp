#include <iostream>

using namespace std;

int main(){

	int prime=0,nxtprime=0,counter=0;
	cin >> prime;
	nxtprime = prime+1;

	for (int i=nxtprime; i>0; i++){
		for (int j=2; j<nxtprime; j++){
			if (i%j==0){
				counter+=1;
			}
		}
		if (counter == 0){
			nxtprime=i;
			break;
		}
		else counter=0;
	}

	cout << nxtprime << endl;
}