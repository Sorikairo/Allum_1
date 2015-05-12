/*
** ia.c for alum1 in /home/cruvei_t/Projets/Elementary_Prog_Elem_C/alum_1
** 
** Made by CRUVEILHER Thomas
** Login   <cruvei_t@epitech.net>
** 
** Started on  Tue Feb  4 14:29:16 2014 CRUVEILHER Thomas
** Last update Mon Feb 10 09:43:07 2014 CRUVEILHER Thomas
*/

#include "alum.h"

int	get_critic_line(t_plateau *plateau)
{
  int	critic;
  int	i;

  i = 0;
  critic = 0;
  while (i < plateau->nb_lines)
    {
      if (plateau->matches[i] == 1)
	critic++;
      i++;
    }
  return (critic);
}

int	get_matches(t_plateau *plateau)
{
  int	i;
  int	matches;

  matches = 0;
  i = 0;
  while (i < plateau->nb_lines)
      matches = matches + plateau->matches[i++];
  return (matches);
}

int	test_line(t_plateau *plateau, int max)
{
  int	i;

  i = 0;
  while (i < plateau->nb_lines && plateau->matches[i] != max)
    i++;
  return (i);
}

void	h_ia_analyse(int max, int line, t_plateau *plateau)
{
  if (plateau->left_lines % 2 == 0)
    pair_tactic(max,line, plateau);
  else
    unpair_tactic(max, line, plateau);
}

int	h_ia(t_plateau *plateau)
{
  int	max;
  int	line;

  max = get_max(plateau);
  line = test_line(plateau, max);
  h_ia_analyse(max, line, plateau);
  return (0);
}
