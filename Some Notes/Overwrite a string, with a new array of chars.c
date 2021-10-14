#include<stdio.h>
int main(){

	char arr[] = "Bangladesh";

	// Overwirting arr[] string
	strcpy(arr, "Amar Desh");

	printf("%s\n", arr); // Amar Desh

	return 0;
}
