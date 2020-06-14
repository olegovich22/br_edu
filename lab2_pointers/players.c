

#include "players.h"


struct player_list *create_player_list(int max_number)
{
	struct player_list *player_list = (struct player_list *)malloc(sizeof(struct player_list));
	
	if(NULL != player_list)
	{
		player_list->a_player = (struct player *)malloc(max_number*sizeof(struct player));
		 
		player_list->max_number = max_number;
		player_list->current_number = 0;
	}
	
	return player_list;
}

void destroy_list(struct player_list *player_list)
{
	if(NULL != player_list)
	{
		if(NULL != player_list->a_player)
		{	
			for(int i=0; i < player_list->max_number; i++)
			{
				destroy_player(player_list->a_player+i);
			}
			
			free(player_list->a_player);
		}
		
		free(player_list);
	}
}


void add_player(struct player_list *player_list, int id, bool clear_blood, int power, char *race, char *name, int size_name)
{
	
	player_list->a_player[player_list->current_number].id = id;
	player_list->a_player[player_list->current_number].clear_blood = clear_blood;
	player_list->a_player[player_list->current_number].power = power;
	strcpy(player_list->a_player[player_list->current_number].race, race);
	
	player_list->a_player[player_list->current_number].name = (char *)malloc(size_name*sizeof(char));
	strcpy(player_list->a_player[player_list->current_number].name, name);
	
	player_list->current_number++;
}

void remove_player(struct player_list *player_list)
{
	free(player_list->a_player[player_list->current_number-1].name);
	player_list->current_number--;
}

void destroy_player(struct player *a_player)
{
	if(NULL != a_player->name)
	{
		free(a_player->name);
	}
}


void print_list(struct player_list *player_list)
{
			for(int i=0; i < player_list->current_number; i++)
			{
				printf("ID : %i \n", player_list->a_player[i].id);
				printf("CLEAR_BLOOD : %i \n", player_list->a_player[i].clear_blood);
				printf("POWER : %i \n", player_list->a_player[i].power);
				printf("RACE : %s \n", player_list->a_player[i].race);
				printf("NAME : %s \n", player_list->a_player[i].name);
				printf("\n");
			}
}