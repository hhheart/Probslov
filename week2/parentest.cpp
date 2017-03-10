#include <iostream>
#include <string>

using namespace std;

int main(){
	int n=0,a=0,b=0,c=0; string input="";
	cin >> n; int arry[n];
	
	for (int i=0; i<n; i++){
		cin >> input;
		for (int j=0; j<input.length(); j++){
			switch(input[j]) {
				case '{' : a++; break;
				case '}' : {
					if  (a <= 0) a-=1000;
					else a--; 
					break;
				}
				case '[' : b++; break;
				case ']' : {
					if  (b <= 0) b-=1000;
					else b--; 
					break;
				}
				case '(' : c++; break;
				case ')' : {
					if  (c <= 0) c-=1000;
					else c--; 
					break;
				}
			}
		}
		if (a==0 && b==0 && c==0){
			arry[i]=1;
		}
		else{
			arry[i]=0;
		}
		a=0; b=0; c=0;
	}
	for (int i=0; i<n; i++){
		if (arry[i] == 1) cout << "yes" << endl;
		else cout << "no" << endl;
	}
}