#include <iostream>
#include <math.h>

using namespace std;

int main(){
    int n,point=0;
    cin >> n;
    for (int i=0; i<n; i++){
        double x=0,y=0,r=0;
        cin >> x >> y;
        r=sqrt((x*x)+(y*y));
        if (r>=0 && r<=2){
            point += 5;
        }
        else if (r>2 && r<=4){
            point += 4;
        }
        else if (r>4 && r<=6){
            point += 3;
        }
        else if (r>6 && r<=8){
            point += 2;
        }
        else if (r>8 && r<=10){
            point += 1;
        }
    }
    cout << point << endl;
}
