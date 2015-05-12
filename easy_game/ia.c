/*
** ia.c for allum1 in /home/cruvei_t/Projets/Elementary_Prog_Elem_C/alum_1/easy_game
** 
** Made by CRUVEILHER Thomas
** Login   <cruvei_t@epitech.net>
** 
** Started on  Mon Feb 10 08:32:39 2014 CRUVEILHER Thomas
** Last update Mon Feb 10 10:49:12 2014 CRUVEILHER Thomas
*/

#include "alum.h"

int	get_best_move(t_board *board)
{
  int	matches;

  if ((matches = board->board % (board->max_matches + 1)) > 1)
    return (matches - 1);
  else
    return (board->max_matches);
}

void	ia(t_board *board)
{
  int	matches;

  matches = get_best_move(board);
  remove_matches(board, matches);
  my_printf("AI removed %d matches\n", matches);
}
