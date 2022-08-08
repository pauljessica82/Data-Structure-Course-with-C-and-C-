//#include<stdlib.h>
//#include<stdio.h>
//
//struct Node {
//	int data;
//	struct Node* next;
//};
//struct Node* head; // global var
//void INSERT(int data, int n) // pass in data as data and pointer position as n 
//{
//	struct Node* temp1 = (Node*)malloc(sizeof(struct Node)); // create temporary new node pointer allocated memory
//	temp1->data = data;
//	temp1->next = NULL;
//	if (n == 1) {
//		temp1->next = head; // if new node in beginning set pointer to head 
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
//void Print()
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
//	head = NULL; 
//	INSERT(2, 1);
//	INSERT(3, 2);
//	INSERT(4, 1);
//	INSERT(5, 2);
//	Print();
//}