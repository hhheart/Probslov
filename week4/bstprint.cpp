#include <iostream>
using namespace std;
typedef int valueType;

struct TreeNode
{
  	valueType val;
 	TreeNode* left;
  	TreeNode* right;

  	TreeNode(valueType val, TreeNode* left=0, TreeNode* right=0)
    	: val(val), left(left), right(right) {}
};
void inorder(TreeNode* r){
  	if(!r) return;
  	cout << "...";
 	inorder(r -> right);
  	cout << "* " << r->val << endl;
  	inorder(r -> left);
}
void insert(TreeNode*& r, valueType x){
  	if(!r) r = new TreeNode(x); 
  	else if(x < r->val) insert(r->left, x);
	else if(x > r->val) insert(r->right, x);
}

int main(){
	TreeNode* root = 0;
	int n,p1;
	cin >> n >> p1;
	//root = new TreeNode(10);
	//cout << root->val << endl;
	for(int i=0; i<n; i++) {
		cin >> p1;
		insert(root,p1);
	}
	inorder(root);
}