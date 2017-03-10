#include <iostream>
#include <string>

using namespace std;

int main(){
	string input; 
	cin >> input; 
	int len = input.length();

	for (int i=0; i<input.length(); i++){
		if ((int)input[i]+4 > 122){
			input[i] = (input[i]+4)-122+96;
		}
		else {
			input[i] = input[i]+4;
		}
	}


	cout << input << endl;

}