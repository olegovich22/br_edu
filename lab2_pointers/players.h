
#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


#ifndef THE_PLAYERS_H
#define THE_PLAYERS_H

struct player
{
	int id;
	bool clear_blood; 	// 0 - dirty, 1 - clear
	int power; 			// 0-100
	char race[10];		//one letter
	char *name;
};


struct player_list
{
	struct player *a_player;
	int max_number;
	int current_number;
};


struct player_list *create_player_list(int max_number);

void destroy_list(struct player_list *player_list);


void add_player(struct player_list *player_list, int id, bool clear_blood, int power, char *race, char *name, int size_name);

void destroy_player(struct player *a_player);

void remove_player(struct player_list *player_list);

void print_list(struct player_list *player_list);

#endif /* THE_PLAYERS_H */
