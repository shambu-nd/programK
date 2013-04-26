#include<stdio.h>

int main() {
	int add();
	printf("hello, cruel world \n");
	add(2,4);
	return 0;
}

int add(a,b) {
	printf("%d \n", a+b);
}
