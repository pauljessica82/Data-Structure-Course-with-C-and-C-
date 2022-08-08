//#include<iostream>
//#include<stdlib.h>
//#include<stdio.h>
//using namespace std;
//
//int response;
//
//int guessNum(int start, int end)
//{
//	int pc_guess;
//	int count = 0;
//
//	while (response != 2)
//	{
//		count += 1; 
//		pc_guess = (start + end) / 2; 
//		printf("Is your number %d? Enter '2' for YES; '1' for TOO HIGH; '0' for TOO LOW. \n ", pc_guess);
//		scanf_s("%d", &response);
//
//		// if response is  = 0 or TOO LOW 
//		if (response == 0)
//		{
//			start = pc_guess + 1;
//		}
//
//		// if response is  = 1 or TOO HIGH
//		else if (response == 1)
//		{
//			end = (pc_guess - 1);
//		}
//	} 
//	printf("BOO-YAH!\n");
//	return count;
//}
//
//int main()
//{
//	int start;
//	int end;
//	int count = 0;
//	cout << "Give me a range\n";
//	cout << "Enter a START number\n";
//	cin >> start; // integer for start number
//	cout << "Enter an END number\n";
//	cin >> end; // integer for end number
//
//  count = guessNum(start, end);
//  printf("I guessed your number in %d tries! \n ", count);
//
//}