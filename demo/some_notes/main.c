#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

struct player
{
	int brain; // 0-100
	bool clear_blood; // 0 - dirty, 1 - clear
	int power; // 0-100
	char race[10];//one letter
	char *name;
};

//#define MOKSHANY 0

enum player_race {MOKSHANY = 0, UGROFINY, BOIKY, LEMKY, TATARY, COSSAKS}; 	

int main(int argc, char **argv)
{
	enum player_race race;

	race=atoi(argv[1]);
	
	switch(race)
	{
		case MOKSHANY:
			printf("CASE MOKSHANY\n");
			break;
		case UGROFINY:
			printf("CASE UGROFINY\n");
			break;
		case BOIKY:
			printf("CASE BOIKY\n");
			break;
		case LEMKY:
			printf("CASE LEMKY\n");
			break;
		case TATARY:
			printf("CASE TATARY\n");
			break;		
		case COSSAKS:
			printf("CASE COSSAKS\n");
			break;	
		default:
			printf("DEFAULT\n");
	}
		
		
	return 0;
}




/*int main()
{
	
	printf("111111111111111\n");
	
	/*for(int i=0; i<10; i++)
	{
		if(i==5) continue;	
		
		printf("TICK %i\n", i);
	}*/
	
	/*for(int i=0; i<10; i++)
	{
		if(i==5) break;	
		
		printf("TICK %i\n", i);
	}
	
	return 0;
}*/