/*
** human.c for allum1 in /home/cruvei_t/Projets/Elementary_Prog_Elem_C/alum_1/easy_game
** 
** Made by CRUVEILHER Thomas
** Login   <cruvei_t@epitech.net>
** 
** Started on  Mon Feb 10 09:05:31 2014 CRUVEILHER Thomas
** Last update Mon Feb 10 10:52:39 2014 CRUVEILHER Thomas
*/

#include "alum.h"

int	humain(t_board *board)
{
  char	buffer[4096];
  int	matches;

  matches = 0;
  my_printf("How many matches do you want to remove ?\n");
  while (matches == 0 ||  matches > board->max_matches)
    {
      read(0, buffer, 4096);
      buffer[1] = 0;
      matches = my_atoi(buffer);
      if (matches == 0 || matches > board->max_matches)
	my_printf("Select a number from 1 to %d !\n", board->max_matches);
    }
  remove_matches(board, matches);
  return (0);
}
