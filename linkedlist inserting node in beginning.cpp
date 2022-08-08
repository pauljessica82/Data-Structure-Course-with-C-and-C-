//#include<stdlib.h>
//#include<stdio.h>
//
//struct Node {
//	int data;
//	struct Node* next;
//};
//
//struct Node* head; // global var
//void Insert(int x)
//{
//	struct Node* temp = (Node*)malloc(sizeof(struct Node)); // create new node pointer
//	temp->data = x;  
//	temp->next = head; // set node pointer to head
//	head = temp; //  set head node to newly created note, essentially replacing head node
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
//	head = NULL; // empty list 
//	printf("How many numbers?\n");
//	int n, i, x;
//	scanf_s("%d", &n);
//	for (i = 0;i < n;i++) {
//		printf("Enter the number \n");
//		scanf_s("%d", &x);
//		Insert(x);
//		Print();
//	}
//
//}