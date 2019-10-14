#include <stdio.h>
#include <stdlib.h>

void print_arr(int *arr, int size)
{
	for(int i=0; i<size; i++)
	printf("data = %d, addres 0x%08x\n", *(arr+i), arr+i);
	
	for(int i=0; i<size; i++)
	*(arr+i) = i+10;
	
}


int main(int argc, char **argv)
{	
	int size = atoi(argv[1]);
	int x[size];
	
	for(int i=0; i<size; i++)
	x[i] = i;	
	
	print_arr(x, size);
	
	
	for(int i=0; i<size; i++)
	printf("data = %d, addres 0x%08x\n", *(x+i), x+i);
	
	return 0;
}