#include <iostream>

using namespace std;

int main(){
    int p1,p2,p3,n,tk1,tk2,tk3,token;
    cin >> p1 >> p2 >> p3 >> n;
    for (int i=0; i<n; i++){
        cin >> token;
        if (token == 1){
            tk1+=p1;
        }
        else if (token == 2){
            tk2+=p2;
        }
        else if (token == 3){
            tk3+=p3;
        }
    }

    int ans=tk1;
    if (tk2 < tk1 && tk2 < tk3){
        ans=tk2;
    }
    if (tk3 < tk1 && tk3 <tk1){
        ans=tk3;
    }
    cout << ans << endl;
}
