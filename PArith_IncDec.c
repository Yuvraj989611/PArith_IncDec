/*
	Pointer Arithmetic:
		- Increment
		- Decrement
		- Addition
		- Subtraction
	Pointer Comparison

    <pointer> + int_value = <pointer>
*/

#include <stdio.h>

int main(){
	int a = 30;
	int *ptr;
	
	ptr = &a; //This line is imp for pointers
	
	printf("Value of 'a' variable: %d\n", a);
	printf("Value of 'a' variable through the pointer 'ptr': %d\n", *ptr);
	
	printf("Address of 'a' variable: %p\n", ptr);

	//Increment the pointer 'ptr'
	++ptr; //address (since pointer to integer - therefore, next 'ptr' value will be 'address' of next memory location which is after 2B)
    
	printf("Address after incrementing the pointer 'ptr' is now: %p\n", ptr);

    //Decrement the pointer 'ptr'
    ptr--;

    printf("Address after decrementing the pointer 'ptr' is now: %p\n", ptr);

	return 0;
}