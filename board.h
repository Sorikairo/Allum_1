/*
** plateau.h for allum1 in /home/cruvei_t/Projets/Elementary_Prog_Elem_C/alum_1/easy_game
** 
** Made by CRUVEILHER Thomas
** Login   <cruvei_t@epitech.net>
** 
** Started on  Mon Feb 10 08:00:31 2014 CRUVEILHER Thomas
** Last update Mon Feb 10 13:57:25 2014 CRUVEILHER Thomas
*/

#ifndef BOARD_H_
# define BOARD_H_

struct s_board
{
  int	board;
  int	nb_matches;
  int	max_matches;
};
typedef struct s_board t_board;
void	init_plateau(t_board *);
void	remove_matches(t_board*, int);
#endif
