#include <iostream>
#include <string>

using namespace std;

int main(){
	string input, tk="", ans=""; cin >> input;

	int s=0, e=0; 
	for (int i=0; i<input.length(); i++){
		if (input[i] == '_'){
			e=i-1;
			tk+="_";
			for (int j=s; j<=e; j++){
				tk+=input[j];
			}

			tk+=ans;
			ans=tk; tk="";
			s=e+2;
		}
		else if (i == input.length()-1){
			e=i;
			for (int j=s; j<=e; j++){
				tk+=input[j];			
			}
			tk+=ans;
			ans=tk;	tk="";
		}
	}
	cout << ans << endl;
}