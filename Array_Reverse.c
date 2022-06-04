#include<stdio.h>
#define SIZE 5
int accept_array(int brr[]);
int print_array(int prr[]);
int reverse_array(int drr[]);

int main()
{
	int arr[SIZE];
	
	printf("Enter the %d numbers : ",SIZE);
	accept_array(arr);
	printf("Array elements are : ");
	print_array(arr);
	
	reverse_array(arr);
	printf("\nArray elements after reverse are : ");
	print_array(arr);
	
	return 0;
}

int accept_array(int brr[])
{
	int i=0;
	for(i=0 ; i<SIZE ; i++)
	{
		scanf("%d",&brr[i]);
	}
}

int print_array(int prr[])
{
	int i=0;
	for(i=0 ; i<SIZE ; i++)
	{
    	printf(" %d",prr[i]);
    }
}

int reverse_array(int drr[])
{
	int i , temp;
	
	for(i = 0 ; i < SIZE/2 ; i++)
	{
		temp = drr[i];
		
		drr[i] = drr[(SIZE-1) - i];
		
		drr[(SIZE-1) - i] = temp;		
	}
}

