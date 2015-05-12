/*
** h_rockpaper.c for allum1 in /home/cruvei_t/Projets/Elementary_Prog_Elem_C/alum_1/hard_game
** 
** Made by CRUVEILHER Thomas
** Login   <cruvei_t@epitech.net>
** 
** Started on  Wed Feb 12 07:13:23 2014 CRUVEILHER Thomas
** Last update Sun Feb 16 07:31:35 2014 CRUVEILHER Thomas
*/

#include "alum.h"

int	enter_input()
{
  char	buffer[4096];
  int	choice;
 
  choice = 0;
  while (choice <= 0 || choice >= 3)
    {
      read(0,buffer,4096);
      buffer[1] = 0;
      choice = my_atoi(buffer);
    }
  return (choice);
}

int	enter_choice()
{

  char	buffer[4096];
  int	choice;
 
  choice = 0;
  while (choice <= 0 || choice > 2)
    {
      read(0,buffer,4096);
      buffer[1] = 0;
      choice = my_atoi(buffer);
    }
  return (choice);
}
void	owned_ia(int choice)
{
  if (choice == 1)
    my_printf("You chose Paper\nAI chose Cisor\nYou loose\n");
  else if (choice == 2)
    my_printf("You chose Rock\nAI chose Paper\nYou loose\n");
  else
    my_printf("You chose Cisor\nAI chose Rock\nYou loose\n");
}

void	aff_the_choice()
{
  my_printf("1.Paper\n");
  my_printf("2.Rock\n");
  my_printf("3.Cisor\n");
}

char	*rockpaper()
{
  int	choice;
  int	continu;

  my_printf("I DON'T LIKE THIS GAME ! LET'S CHANGE !\n");
  continu = 0;
  while (continu != 2)
    {
      my_printf("ENTER YOUR MOVE\n");
      aff_the_choice();
      choice = enter_input();
      owned_ia(choice);
      my_printf("DO YOU WANT TO PLAY AGAIN ?\n1.Yes\n2.No\n");
      continu = enter_choice();
    }
  return ("See you soon\n");
}
