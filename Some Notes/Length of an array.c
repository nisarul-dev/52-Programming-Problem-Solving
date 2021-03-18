#include<stdio.h>
int main(){

	int Length  =0;

	int arr[] = {2,4,6,8,9,4};//6 elements

	printf("Size of int array:%d \n",sizeof(arr)); // Size of int array:24
	printf("Size of 1 int value :%d \n",sizeof(int)); //  Size of 1 int value :4

	//Calculate length of the array ( Number of elements)
	Length  = sizeof(arr)/sizeof(int);

	//display array length

	printf("So, array length is:%d",Length ); // So, array length is:6

	return 0;
}
