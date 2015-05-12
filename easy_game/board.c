/*
** plateau.c for allum1 in /home/cruvei_t/Projets/Elementary_Prog_Elem_C/alum_1/easy_game
** 
** Made by CRUVEILHER Thomas
** Login   <cruvei_t@epitech.net>
** 
** Started on  Mon Feb 10 07:59:35 2014 CRUVEILHER Thomas
** Last update Mon Feb 10 14:06:48 2014 CRUVEILHER Thomas
*/

#include "alum.h"

int	ask_matches_max()
{
  int	max;
  char	buffer[4096];
  int	i;

  max = 0;
  my_printf("Enter how many matches you can remove at once\n");
  while (max == 0)
    {
      i = read(0,buffer,4096);
      buffer[i - 1] = 0;
      max = my_atoi(buffer);
      if (max == 0)
	my_printf("Please enter a number > 0\n");
    }
  return (max);
}

int	ask_matches_nb(int max)
{
  int	nb;
  char	buffer[4096];
  int	i;

  nb = 0;
  my_printf("Enter how many matches you want in the game\n");
  while (nb < ((max + 1) * 3 + 1))
    {
      i = read(0, buffer, 4096);
      buffer[i - 1] = 0;
      nb = my_atoi(buffer);
      if (nb < (max * 3 + 1))
	my_printf("Please, enter a number superior than %d\n", (max + 1) * 3 + 1);
    }
  return (nb);
}

void	init_plateau(t_board *board)
{
  int	nb;
  int	max;

  max = ask_matches_max();
  nb = ask_matches_nb(max);
  board->board = nb;
  board->max_matches = max;
}

void	remove_matches(t_board *board, int nb)
{
  if (nb <= board->max_matches)
    board->board = board->board - nb;
  else
    board->board = board->board - board->max_matches;
}

void	print_board(t_board *board)
{
  int	counter;

  counter = 0;
  while (counter < board->board)
    {
      my_printf("| ");
      counter++;
    }
  my_printf("\nThere is %d matches left", board->board);
  my_printf("\n");
}
