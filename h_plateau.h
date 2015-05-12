/*
** plateau.h for alum1 in /home/cruvei_t/Projets/Elementary_Prog_Elem_C/alum_1
** 
** Made by CRUVEILHER Thomas
** Login   <cruvei_t@epitech.net>
** 
** Started on  Wed Feb  5 08:59:53 2014 CRUVEILHER Thomas
** Last update Mon Feb 10 09:41:41 2014 CRUVEILHER Thomas
*/

#ifndef PLATEAU_H_
# define PLATEAU_H_
struct s_plateau
{
  int	*matches;
  int	nb_lines;
  int	left_lines;
};
typedef struct s_plateau t_plateau;
int	h_init_plateau(t_plateau *, int);
int	get_max(t_plateau *);
int	get_nb_left(t_plateau *);
int	get_matches(t_plateau *);
#endif
