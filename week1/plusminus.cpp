#include <iostream>

using namespace std;

int main(){
    int n,tk,ans;
    char op;
    cin >> n;
    cin >> ans;
    for (int i=1; i<n; i++){
        cin >> op >> tk;
        if (op == '+'){
            ans += tk;
        }
        else if (op == '-'){
            ans -= tk;
        }
    }
    cout << ans << endl;
}
