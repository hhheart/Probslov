#include <iostream>
#include <string>

using namespace std;

int main(){
	string input, tk;
	cin >> input;
	tk = input;
    int len = input.length();
//	if (len%2!=0) len++;
	for (int i=0; i<len; i++){
		input[i] = tk[len-1-i];
	}

	cout << input << endl;
}