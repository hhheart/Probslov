
#include<iostream>
#include<stack>
#include<string>
using namespace std;

bool ArePair(char opening,char closing){
if(opening == '(' && closing == ')') return true;
else if(opening == '{' && closing == '}') return true;
else if(opening == '[' && closing == ']') return true;
return false;
}
bool AreParanthesesBalanced(string exp)
{
	stack<char>  S;
for(int i =0;i<exp.length();i++)
	{
if(exp[i] == '(' || exp[i] == '{' || exp[i] == '[')
			S.push(exp[i]);
else if(exp[i] == ')' || exp[i] == '}' || exp[i] == ']')
		{
if(S.empty() || !ArePair(S.top(),exp[i]))
return false;
else
				S.pop();
		}
	}
return S.empty() ? true:false;
}
int main()
{
	int n; cin >> n;
	for (int i=0; i<n; i++){
		string expression; cin>>expression;
		if(AreParanthesesBalanced(expression)) cout<<"yes\n";
		else cout<<"no\n";
	}
}