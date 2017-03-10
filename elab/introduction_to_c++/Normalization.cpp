#include <iostream>

using namespace std;

int main(){
	int a=0,b=0;
	cin >> a >> b;

	//find min
	int min=a;
	if (b<a) min=b;

	//algo
	for (int div=min; div>=2; div--){
		if (a%div==0 && b%div==0){
			a=a/div; b=b/div;
		}
	}
	cout << a << "/" << b << endl;
}