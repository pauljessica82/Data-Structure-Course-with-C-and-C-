//#include<stdlib.h>
//#include<stdio.h>
//
//struct Node {
//	int data;
//	struct Node* next;
//	struct Node* prev;
//};
//
//struct Node* head; // global var
//
//void InsertToTail(int x) 
//{
//	struct Node* temp = (Node*)malloc(sizeof(struct Node)); // create new node pointer
//	temp->data = x;
//	temp->next = NULL;
//	temp->prev = NULL; 
//	
//	if (head == NULL)
//	{
//		head = temp; 
//		return;
//	}
//
//	Node* temp2 = head; // create remote controller that will traverse the list and not be allocated in memory
//	while (temp2->next != NULL)
//	{
//		temp2 = temp2->next; // traverse the list
//	}
//
//	temp2->next = temp; // remote controller temp2 (not allocated in memory) 
//	temp->prev = temp2;
//	temp->next = NULL; 
//
//};
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
//	head =  NULL; // empty list 
//	/*prev = NULL;*/
//	printf("How many numbers?\n");
//	int n, i, x;
//	scanf_s("%d", &n);
//	for (i = 0;i < n;i++) {
//		printf("Enter the number \n");
//		scanf_s("%d", &x);
//		InsertToTail(x);
//		Print();
//	}
//
//}