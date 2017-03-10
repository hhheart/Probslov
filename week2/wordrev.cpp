#include <iostream>
#include <string>

using namespace std;

int main(){
	string input, tk; cin >> input;
	tk = input;

	int s=0, e=0; 
	for (int i=0; i<input.length(); i++){
		if (input[i] == '_'){
			e=i-1;
			for (int j=s; j<=e; j++){
				input[j] = tk[s+e-j];
			}
			s=e+2;
		}
		else if (i == input.length()-1){
			e=i;
			for (int j=s; j<=e; j++){
				input[j] = tk[s+e-j];
			}
		}
	}
	cout << input << endl;
}