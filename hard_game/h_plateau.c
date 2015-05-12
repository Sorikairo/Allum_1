/*
** plateau.c for alum1 in /home/cruvei_t/Projets/Elementary_Prog_Elem_C/alum_1
** 
** Made by CRUVEILHER Thomas
** Login   <cruvei_t@epitech.net>
** 
** Started on  Wed Feb  5 09:06:15 2014 CRUVEILHER Thomas
** Last update Sat Feb 15 16:46:07 2014 CRUVEILHER Thomas
*/

#include "alum.h"

int	h_init_plateau(t_plateau *plateau, int nb_lines)
{
  int	counter;

  counter = 0;
  plateau->nb_lines = nb_lines;
  plateau->left_lines = nb_lines;
  if ((plateau->matches = malloc(sizeof(int) * nb_lines)) == NULL)
    return (0);
  while (counter < nb_lines)
    {
      plateau->matches[counter] = 1 + (2 * counter);
      counter++;
    }
  return (0);
}

int	get_max(t_plateau *plateau)
{
  int	max;
  int	i;

  i = 0;
  max = 0;
  while (i < 4)
    {
      if (plateau->matches[i] > max)
	max = plateau->matches[i];
      i++;
    }
  return (max);
}

void	h_print_board(t_plateau *plateau)
{
  int	i;
  int	counter;

  i = 0;
  while (i < plateau->nb_lines)
    {
      counter = 0;
      my_printf("\n%d\t", i + 1);
      while (counter < plateau->matches[i])
	{
	  my_printf(" | ");
	  counter++;
	}
      i++;
    }
}

void	h_remove_match(int nb, int line, t_plateau *plateau)
{
  if (nb > plateau->matches[line] || nb < 0)
    plateau->matches[line] = 0;
  else
    plateau->matches[line] = plateau->matches[line] - nb;
  if (plateau->matches[line] == 0)
    plateau->left_lines--;
}
