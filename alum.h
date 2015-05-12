#ifndef ALUM_H_
# define ALUM_H_

#include "h_plateau.h"
#include "board.h"
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include "my.h"

int	my_atoi(char *);
void	h_remove_match(int, int, t_plateau *);
int	h_init_plateau(t_plateau *plateau, int nb_lines);
int	get_max(t_plateau*);
void	h_print_board(t_plateau*);
int	h_ia(t_plateau *);
void	pair_tactic(int, int, t_plateau*);
void	unpair_tactic(int, int, t_plateau*);
int	get_critic_line(t_plateau*);
void	ia(t_board *);
void	print_board(t_board *);
int	humain(t_board*);
void	h_game();
char	*rockpaper();
#endif
