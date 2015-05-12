/*
** alum1.c for alum1 in /home/cruvei_t/Projets/Elementary_Prog_Elem_C/alum_1
** 
** Made by CRUVEILHER Thomas
** Login   <cruvei_t@epitech.net>
** 
** Started on  Tue Feb  4 12:59:45 2014 CRUVEILHER Thomas
** Last update Sat Feb 15 16:43:44 2014 CRUVEILHER Thomas
*/

#include "alum.h"

int	get_line(t_plateau *plateau)
{
  int	line;
  char	buffer[4096];

  line = 0;
  my_putstr("Quelle ligne choississez vous ?\n");
  while (line == 0 || line > plateau->nb_lines
	 || plateau->matches[line - 1] == 0)
    {
      read(0, buffer, 4096);
      buffer[1] = 0;
      line = my_atoi(buffer);
      if (line == 0 || line > plateau->nb_lines
	  || plateau->matches[line - 1] == 0)
	my_printf("Entrer une ligne valide !\n");
    }
  return (line);
}

int	get_nb_matches()
{
  int	nb;
  char	buffer[4096];

  nb = 0;
  my_putstr("Combien d'allumettes enlevez-vous ?\n") ;
  while (nb == 0)
    {
      read(0, buffer, 4096);
      buffer[1] = 0;
      nb = my_atoi(buffer);
      if (nb == 0)
	my_printf("Entrer un nombre d'allumettes correct !\n");
    }
  return (nb);
}

void	h_human(t_plateau *plateau)
{
  int	line;
  int	removed;

  h_print_board(plateau);
  my_printf("\n");
  line = get_line(plateau);
  removed = get_nb_matches();
  h_remove_match(removed, line - 1, plateau);
}

char	*h_duel(t_plateau *plateau, int player)
{
  if (player == 1)
    {
      while (42)
	{
	  h_human(plateau);
	  if (get_matches(plateau) == 1)
	    return (rockpaper());
	  h_ia(plateau);
	  if (get_matches(plateau) == 1)
	    return ("AI win !!\nSee you soon !\n"); 
	}
    }
  else
    {
      while (42)
	{
	  h_ia(plateau);
	  if (get_matches(plateau) == 1)
	    return ("AI win !!\nSee you soon !\n");
	  h_human(plateau);
	  if (get_matches(plateau) == 1)
	    return (rockpaper());
	}
    }
}

void	h_game()
{
  char buffer[4096];
  int	player;
  t_plateau	plateau;

  h_init_plateau(&plateau, 4);
  my_putstr("Do you want to be the First (1) or Second (2) players ?\n");
  read(0, buffer, 4096);
  buffer[1] = 0;
  player = my_atoi(buffer);
  if (player == 1 || player == 2)
    my_putstr(h_duel(&plateau, player));
  else
    my_putstr(h_duel(&plateau, 1));
}
