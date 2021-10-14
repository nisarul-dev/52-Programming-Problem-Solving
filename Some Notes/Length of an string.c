#include<stdio.h>
#include<string.h> // For the support of string functions

int main(){

	char arr[100] = "Bangladesh";

	//Calculate length of the String
	int length  = strlen(arr);

	//display array length
	printf("So, the string \"%s\" length is: %d\n", arr, length); // So, the string "Bangladesh" length is: 10

	return 0;
}
