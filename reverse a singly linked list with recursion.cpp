//#include<iostream>
//#include<stdlib.h>
//#include<stdio.h>
//
//struct Node {
//	int data;
//	struct Node* next;
//};
//
//
//Node* INSERT(Node* head, int data) // pass in data as data and pointer position as n 
//{
//	struct Node* temp1 = (Node*)malloc(sizeof(struct Node)); // create temporary new node pointer allocated memory
//	temp1->data = data;
//	temp1->next = NULL;
//	if (head == 1) {
//		Node* temp1->next = head; // if new node in beginning set pointer to head 
//		head = temp1; // replace head with new node
//		return;
//	}
//	Node* temp2 = head;  // create new node pointer pointing to head
//	for (int i = 0;i < n - 2;i++) { 
//		temp2 = temp2->next; // traverse the list
//	}
//	temp1->next = temp2->next;
//	temp2->next = temp1;  // set temp2 pointer equal to the current temp1 position 
//}
//
//struct Node* Reverse(struct Node* head) {
//
//	struct Node* prev = NULL; 
//	struct Node* curr = head; 
//	struct Node* next = NULL; 
//
//	while (curr->next != NULL)
//	{
//		curr = prev; // store the current node in prev variable 
//		next = curr->next;  // store the address of the next node in the next var 
//		curr->next = prev; // update curr . next addres with address of prev node
//		curr = next; // set the new head to the next node
//	}
//
//	head = prev; // set the head node to the prev node after the while loop completes
//	return head;
//
//
//}
//
//void Print(struct Node* head)
//{
//	struct Node* temp = head;
//	printf("List is: ");
//	while (temp != NULL)
//	{
//		printf(" %d", temp->data);
//		temp = temp->next;
//	}
//	printf("\n");
//}
//
//int main() {
//
//	struct Node* head = NULL; 
//	head = INSERT(2, 1);
//	head = INSERT(3, 2);
//	head = INSERT(4, 1);
//	head = INSERT(5, 2);
//	Print();
//	Reverse(head); 
//	Print(); 
//
//}