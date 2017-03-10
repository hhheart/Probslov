#include <iostream>
#include <math.h>

using namespace std;

int main(){
    int x=0,y=0;
    string cm;
    cin >> cm;

    for (int i=0; i<cm.length(); i++){
        if (cm[i] == 'N'){
            y+=1;
        }
        else if (cm[i] == 'S'){
            y-=1;
        }
        else if (cm[i] == 'E'){
            x+=1;
        }
        else if (cm[i] == 'W'){
            x-=1;
        }
        else if (cm[i] == 'Z'){
            x=0; y=0;
        }
    }

    cout << x << " " << y << endl;
}
