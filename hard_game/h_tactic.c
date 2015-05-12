/*
** tactic.c for alum1 in /home/cruvei_t/Projets/Elementary_Prog_Elem_C/alum_1
** 
** Made by CRUVEILHER Thomas
** Login   <cruvei_t@epitech.net>
** 
** Started on  Tue Feb  4 20:05:33 2014 CRUVEILHER Thomas
** Last update Thu Feb  6 16:05:01 2014 CRUVEILHER Thomas
*/

#include "alum.h"

void	think_3_left_tactic(int max, int line, t_plateau *plateau)
{
  int	nb_matches;

  if ((nb_matches = get_matches(plateau) - max) == 2)
    {
      if (max > 1)
	h_remove_match(max - 1, line, plateau);
      else
	h_remove_match(max, line, plateau);
    }
  else
    {
      if (get_critic_line(plateau) == 0)
	h_remove_match(max, line, plateau);
      else if (get_critic_line(plateau) == 1)
	h_remove_match(max - 1, line, plateau);
      else
	{
	  if (max > 2)
	    h_remove_match(max - 2, line, plateau);
	  else if (max == 2)
	    h_remove_match(max - 1, line, plateau);
	  else
	    h_remove_match(max, line, plateau);
	}
    }
}

void	pair_tactic(int max, int line, t_plateau *plateau)
{
  if (plateau->left_lines > 2)
    h_remove_match(max, line, plateau);
  else
    {
      if (get_critic_line(plateau) == 0)
	{
	  if (max > 2)
	    h_remove_match(max - 2, line, plateau);
	  else if (max == 2)
	   h_remove_match(1, line, plateau);
	  else
	    h_remove_match(max, line, plateau);	  
	}
      else if (get_critic_line(plateau) == 1)
	h_remove_match(max, line, plateau);
      else
	h_remove_match(max, line, plateau);
    }
}

void	unpair_tactic(int max, int line, t_plateau *plateau)
{
  if (plateau->left_lines > 3)
    h_remove_match(max, line, plateau);
  else
    {
      if (plateau->left_lines == 1)
	{
	  if (plateau->matches[line] == 1)
	    h_remove_match(1, line, plateau);
	  else
	    h_remove_match(max - 1, line, plateau);
	}
      else if (plateau->left_lines == 3)
	think_3_left_tactic(max, line, plateau);
    }
}
