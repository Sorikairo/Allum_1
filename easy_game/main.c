/*
** main.c for allum1 in /home/cruvei_t/Projets/Elementary_Prog_Elem_C/alum_1/easy_game
** 
** Made by CRUVEILHER Thomas
** Login   <cruvei_t@epitech.net>
** 
** Started on  Mon Feb 10 09:13:44 2014 CRUVEILHER Thomas
** Last update Sun Feb 16 07:27:43 2014 CRUVEILHER Thomas
*/

#include "alum.h"

char	*game()
{
  t_board	board;
  
  init_plateau(&board);
  while (42)
    {
      print_board(&board);
      humain(&board);
      if (board.board <= 1)
	return (rockpaper());
      ia(&board);
      if (board.board <= 1)
	return ("IA win !!\n");
    }
}

int	main()
{
  char	buffer[4096];
  int	choice;

  my_printf("Choose a game :\n1.EASY\n2.HARD\n");
  while ((choice = my_atoi(buffer)) != 1 &&
	 (choice = my_atoi(buffer)) != 2)
    {
      read(0, buffer, 4096);
      buffer[1] = 0;
    }  
  if (choice == 2)
    h_game();
  else
    my_printf(game());
  return (0);
}
