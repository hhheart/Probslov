#include <iostream>
#include <math.h>

using namespace std;

int main(){
    int x=0,y=0;
    string cm,ncm="";
    char p='N';
    cin >> cm;

    for (int i=0; i<cm.length(); i++){
        if (cm[i] == 'N'){
            if (p=='N'){
                ncm+="F";
            }
            else if (p=='S'){
                ncm+="RRF"; p='N';
            }
            else if (p=='E'){
                ncm+="RRRF"; p='N';
            }
            else if (p=='W'){
                ncm+="RF"; p='N';
            }
        }
        else if (cm[i] == 'S'){
            if (p=='S'){
                ncm+="F";
            }
            else if (p=='N'){
                ncm+="RRF"; p='S';
            }
            else if (p=='E'){
                ncm+="RF"; p='S';
            }
            else if (p=='W'){
                ncm+="RRRF"; p='S';
            }
        }
        else if (cm[i] == 'E'){
            if(p=='E'){
                ncm+="F";
            }
            else if (p=='N'){
                ncm+="RF"; p='E';
            }
            else if (p=='S'){
		        ncm+="RRRF"; p='E';
            }
            else if (p=='W'){
		        ncm+="RRF"; p='E';
            }
        }
        else if (cm[i] == 'W'){

            if (p=='W'){
                ncm+="F";
            }
            else if (p=='N'){
                ncm+="RRRF"; p='W';
            }
            else if (p=='S'){
                ncm+="RF"; p='W';
            }
            else if (p=='E'){
                ncm+="RRF"; p='W';
            }
        }
        else if (cm[i] == 'Z'){
            ncm+="Z";
            p='N';
        }
    }
    cout << ncm << endl;
}
