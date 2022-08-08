//#include<iostream>
//#include<stdlib.h>
//#include<stdio.h>
//
//
//int isfactorial(int baseint)
//{
//	int num_tobefact = baseint - 1; 
//	int count, result = 1; 
//
//	for (count = 1; count <= num_tobefact; count++)
//	{
//		result = count * result; 
//	}
//
//	int factorial = baseint * result; 
//	return factorial; 
//
//}
//
//int main()
//{
//	//calculate factorial of a number
//	//user enters number that wants to be factorialize - base int
//	// the baseint - 1 equals number to be factorialize (eg. baseint =5 , do 5-1, num to be fact is 4! ) 
//
//	int input = 1; 
//	printf("Enter a number to find its factorial \n ");
//	scanf_s("%d", &input);
//	int factorial = isfactorial(input);
//	printf("Factorial of %d is %d \n", input, factorial);
//
//}