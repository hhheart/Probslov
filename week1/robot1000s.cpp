#include <iostream>
#include <math.h>
#include <cstdlib>
#include <climits>

using namespace std;

int main(){
    int x=0,y=0,pwr=0,nlost=0;
    int n=0,s=0,e=0,w=0;
    string cm="";
    cin >> cm;
    cin >> nlost;
    int cmlen = cm.length();

    for (int i=0; i<cmlen; i++){
      if (cm[i]=='N'){
        n+=1;
      }
      else if (cm[i]=='S'){
        s+=1;
      }
      else if (cm[i]=='E'){
        e+=1;
      }
      else if (cm[i]=='W'){
        w+=1;
      }
    }
    for (int i=0; i<nlost; i++){
      if (n!=0 && s!=0){
        if (abs(n)>=abs(s)) s--;
        else n--;
      } 
      else if (e!=0 && w!=0){
        if (abs(e)>=abs(w)) w--;
        else e--;
      }
      else {
        if (n!=0) n--;
        else if (s!=0) s--;
        else if (e!=0) e--;
        else if (w!=0) w--;
      }
    }
    x=n-s; y=e-w;
    pwr = 2*(abs(x)+abs(y));
    cout << pwr << endl;
}
