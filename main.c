#include <stdio.h>

int *stack_create_int(int size) {
	int *ptr = (int*)malloc((size+2) * sizeof(int));
	if (ptr == NULL) {
		printf("Couldn't allocate");
	}
	ptr[0] = size;
	ptr[1] = 0;
	return ptr;
}

void stack_push_int(int *ptr, int x) {
	int size = ptr[0];
	int num_of_elm = ptr[1];
	
	if (num_of_elm >= size){
		printf("Stack too big!\n");
	} else {
	ptr[1]++;
	num_of_elm++;
	ptr[num_of_elm + 1] = x;
	}
}

void stack_pop_int(int *ptr) {
	int size = ptr[0];
	int num_of_elm = ptr[1];

	if (num_of_elm > 0) {
	ptr[1]--;
	ptr[num_of_elm+1] = 0;
	}
	else {
		printf("Stack has no elems\n");
	}
}

void stack_delete_int(int *ptr) {
	free(ptr);
}

int stack_get_int(int *ptr) {
	int size = ptr[0];
	int num_of_elm = ptr[1];

	if (num_of_elm > 0) {
	return ptr[num_of_elm+1];
	}
	else {
		printf("Nothing on stack\n");
		return -1;
	}
}

int main(void) {
	int *mystack = stack_create_int(3);
	stack_push_int(mystack, 5);
	stack_push_int(mystack, 10);
	int a = stack_get_int(mystack);
	stack_pop_int(mystack);
	int b = stack_get_int(mystack);
	printf("%d, %d",a, b);
  stack_delete_int(mystack);
  return 0;
}