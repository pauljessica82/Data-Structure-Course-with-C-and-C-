//#include<iostream>
//using namespace std;
//
//
//struct BstNode {
//	int data;
//	struct BstNode* left;
//	struct BstNode* right;
//};
//
//// Function to create a new node in heap 
//BstNode* GetNewNode(int data) {
//	BstNode* newNode = new BstNode(); // or struct malloc in C 
//	newNode->data = data;
//	newNode->left = newNode->right = NULL;  
//	return newNode;  // returns address of new node
//}
//
//// Function to insert data in BST, returns address of root node
//BstNode* Insert(BstNode* root, int data) {
//	if (root == NULL) { // is BST is empty 
//		root = GetNewNode(data); // creates new node with left and right ptrs being NULL
//	}
//	// if data to be inserted is lesser, insert in left subtree 
//	else if (data <= root->data) {
//		root->left = Insert(root->left, data); // recursion function is a function calling itself
//	}
//	else {
//		root->right = Insert(root->right, data);
//	}
//	return root; 
//}
//
//// To search an element in BST, returns true if element is found
//bool Search(BstNode* root, int data) // address of root node is argument, and data is argument 
//{
//	if (root == NULL)
//	{
//		return false; // BST is empty so return false meaning your element doesnt exist in BST
//	}
//	else if (root->data == data)
//	{
//		return true;
//	}
//	else if (data <= root->data)
//	{
//		return Search(root->left, data);
//	}
//	else
//	{
//		return Search(root->right, data);
//	}
//}
//int main() {
//	BstNode* root = NULL;  // Creating an empty tree
//	/*Code to test the logic*/
//	root = Insert(root, 15);
//	root = Insert(root, 10);
//	root = Insert(root, 20);
//	root = Insert(root, 25);
//	root = Insert(root, 8);
//	root = Insert(root, 12);
//	// Ask user to enter a number.  
//	int number;
//	cout << "Enter number be searched\n";
//	cin >> number;
//	//If number is found, print "FOUND"
//	if (Search(root, number) == true) cout << "Found\n";
//	else cout << "Not Found\n";
//}