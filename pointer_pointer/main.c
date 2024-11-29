#include <stdio.h>
#include <stdlib.h>

void allocate_int(int **pointer_pointer, int value) {
	int *pointer = (int *)malloc(sizeof(int));
	*pointer_pointer = pointer;

	if(*pointer_pointer == NULL) {
		return;
	}
	**pointer_pointer = value;
}

int main() {
	int *pointer = NULL;
	int *pointer2 = NULL;
	int **pointer3 = NULL;
	allocate_int(&pointer, 10);
	allocate_int(&pointer2, 5);
	pointer3 = &pointer;
	printf("pointer value: %d\n", *pointer);
	printf("address that pointer points to: %p\n", pointer);
	printf("pointer address: %p\n", &pointer);

	printf("pointer2 value: %d\n", *pointer2);
	printf("address that pointer2 points to: %p\n", pointer2);
       printf("pointer2 address: %p\n", &pointer2);	
	free(pointer2);

	printf("pointer3 value: %p\n", *pointer3);
	printf("address that pointer3 points to: %p\n", pointer3);
       printf("pointer3 address: %p\n", &pointer3);
	free(pointer);		

	printf("test\n");
}
