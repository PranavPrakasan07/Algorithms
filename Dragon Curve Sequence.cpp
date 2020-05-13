#include <iostream>
#include <stdlib.h>
#include <math.h>

using namespace std;

int length;         // length of tree_array

struct node
{
	int value;
	node* left, * right;
};

node* createNewNode(int number)
{
	node* newNode   = new node;

	newNode->value = number;
	newNode->left = newNode->right = NULL;

	return newNode;
}

node* insertLevelOrder(int arr[], node* root, int i, int treeSize)
{
	if (i < treeSize)           // value of i increase to size_of tree
	{
		node* temp = createNewNode(arr[i]);
		root = temp;

		root->left   = insertLevelOrder(arr, root -> left , 2 * i + 1,  treeSize);
		root->right = insertLevelOrder(arr, root->right, 2 * i + 2, treeSize);
	}

	return root;
}

void inOrder(node* root)
{
	if (root != NULL)
	{
		inOrder(root->left);

		cout << root->value;

		inOrder(root->right);
	}
}

int main()
{
	int n = 5;

	//cout<<"ENTER THE VALUE OF 'N' : ";
	//cin>>n;

    length = pow(2,n) - 1;
	int tree[length + 1];

    tree[0] = 1;            //  Value of root is 1 according to Dragon_CURVE Sequence

	for(int i = 1; i < length; i++)
    {
        tree[i] = i%2;
    }

	node* root = insertLevelOrder(tree, root, 0, length);
	inOrder(root);

	return 0;
}
