#include<iostream>
using namespace std;

class binary_tree
{
	struct node
	{
		int data;
		node* left;
		node* right;
	};
	
	public:
		
		
		void addvalue()
		{
			int val,val1,val2;
			cin>>val;
			node* n=new node;
			n->data=val;
			
			n->left->data=val1;
			n->right->data=val2;
			
			
		}
};






int main()
{
	binary_tree x;
	x.addvalue();
	
	
}
