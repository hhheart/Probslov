#include <iostream>
#include <math.h>
#include <cstdlib>

using namespace std;

int main(){

	int N=0,L=0,ans=0;
	cin >> N >> L;
	int arry [N];
	
	for (int i=0; i<N; i++){
		cin >> arry[i];
	}
	for (int j=0; j<N; j++){
		for (int k=j; k<N; k++){
			int dist = abs(arry[j]-arry[k]);
			if (dist<=L && j!=k){
				ans++;
			}
		}
	}
	cout << ans << endl;
}
