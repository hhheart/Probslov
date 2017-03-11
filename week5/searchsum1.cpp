#include <iostream>

using namespace std;

int main(){
	int n, k, c, m, counter=0; 
	cin >> n >> k;
	int comic[n];
	for (int i=0; i<n; i++){
		cin >> c;
		comic[i] = c;
	}
	for (int j=0; j<k; j++){
		cin >> m;
		for (int z=0; z<n; z++){
			if(m >= comic[z]){
				++counter;
				m -= comic[z];
			}
			else break;
		}
		cout << counter << endl;
		counter=0;
	}
}