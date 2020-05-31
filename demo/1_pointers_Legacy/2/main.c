#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv)
{
	printf("Prog name %s\n", argv[0]);
	printf("Count of args %i\n", argc);
	
	if(argc != 2)
	{
		printf("ERROR need 2 args \n");
		return -1;	
	}
	
	int numb = atoi(argv[1]);
	
	printf("First arg %i\n", numb);
	
	return 0;
}