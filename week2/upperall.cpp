#include <iostream>
#include <string>

using namespace std;

int main(){
	string input; 
	cin >> input; 
	int len = input.length();

	for (int i=0; i<input.length(); i++){
		if (input[i]>=97 && input[i]<=122){
			input[i] = (input[i]-32);
		}
	}
	cout << input << endl;
}