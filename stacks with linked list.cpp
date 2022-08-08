//#include<iostream>
//#include<stdlib.h>
//#include<stdio.h>
//#include <stack>
//using namespace std;
////homework is to fix this script so it reverses linked list using stack
//struct Node {
//	int data;
//	struct Node* link;
//};
//
//struct Node* top; // global var
//struct Node* head; // global var
//
//void Push(int x) // insert in beginning of linked list
//{
//		struct Node* temp = (Node*)malloc(sizeof(struct Node)); // create new node pointer
//		temp->data = x;
//		temp->link = top;
//		top = temp; 
//}
//
//void Pop() // delete from beginning of list 
//{
//	struct Node* temp; 
//	if (top == NULL) return; 
//	temp = top; 
//	top = temp->link;
//	free(temp);
//
//}
//
//void Reverse()
//{
//	if (head == NULL) return; // check if list is empty
//	stack<struct Node*> S;
//	Node* temp = head;
//	while (head != NULL)  
//	{
//		S.push(temp); //push node addresses into stack S 
//		temp = temp->link;
//	}
//
//	    temp = S.top(); // point temp to address in top of stack
//		head = temp;  // set head node to a new address which is the node referenced at the top of stack
//		S.pop(); // if you dont do this the temp->link=S.top() featured in the while loop will point to itself 
//
//		while (!S.empty()) 
//		{
//			temp->link = S.top();
//			S.pop();
//			temp = temp->link;
//		}
//
//		temp->link = NULL;
//	
//
//
//}