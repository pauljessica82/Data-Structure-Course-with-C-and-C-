//#include<stdlib.h>
//#include<stdio.h>
//
//
//struct Node {
//	int data;
//	struct Node* next;
//};
//
//struct Node* front = NULL; // global var
//struct Node* rear = NULL; // global var
//
//void Enqueue(int x)
//{
//	struct Node* temp = (Node*)malloc(sizeof(struct Node)); // create new node pointer
//	temp->data = x; 
//	temp->next = NULL;
//	if (front == NULL && rear == NULL)
//	{
//		front = rear = temp;
//		return;
//	}
//
//	rear->next = temp;
//	rear = temp;
//}
//
//void Dequeue()
//{
//	struct Node* temp = front; 
//	if (front == NULL)return; 
//	if (front == rear) {
//		front = rear = NULL;
//	}
//	else {
//		front = front->next;
//	}
//	free(temp);
//}