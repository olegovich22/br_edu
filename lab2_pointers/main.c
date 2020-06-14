#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

#include "players.h"



int main(int argc, char **argv)
{		
	printf("HELLO\n");	
	
	struct player_list *a_player_list = create_player_list(5);
	
	add_player(a_player_list, 1, true, 20, "BANDERY", "olegovich22", 20);
	add_player(a_player_list, 2, false, 100, "BANDERY", "SHYHEVYCH", 20);
	add_player(a_player_list, 2, false, 0, "MOKSHANY", "_/\_", 10);
	
	printf("\nPRINT 1111\n");
	print_list(a_player_list);
	
	remove_player(a_player_list);
	remove_player(a_player_list);
	
	printf("\nPRINT 2222\n");
	print_list(a_player_list);
	
	destroy_list(a_player_list);
	
	
	return 0;
}
