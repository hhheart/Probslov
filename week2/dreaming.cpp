#include <iostream>
#include <stack>
#include <algorithm>
#include <string>
using namespace std;

int main(){
	string a, b, ans="";
	cin >> a >> b; a='0'+a; b='0'+b;
	int len = max(a.length(),b.length());
	while ((a.length()!=len || b.length()!=len) || ans.length()!=len){
		if (a.length()!=len) a='0'+a;
		if (b.length()!=len) b='0'+b;
		if (ans.length()!=len) ans+='0';
	}
	for (int i=len-1; i>=0; i--){
		if ((ans[i]-'0')+(a[i]-'0')+(b[i]-'0') >= 10){
			ans[i] = ((ans[i]-'0')+(a[i]-'0')+(b[i]-'0')-10)+'0';
			ans[i-1] += 1;
		}
		else{
			ans[i] += (a[i]-'0')+(b[i]-'0');
		}
	}
	ans.erase(0, min(ans.find_first_not_of('0'), ans.size()-1));
	cout << ans << endl;
}