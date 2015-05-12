/*
** my_atoi.c for Bistro in /home/Sorikairo/Projets/Elementary_Prog_Elem_C/Bistromatique/Sources/NPI
** 
** Made by CRUVEILHER Thomas
** Login   <cruvei_t@epitech.net>
** 
** Started on  Sun Nov 10 15:09:07 2013 CRUVEILHER Thomas
** Last update Sun Jan  5 19:22:03 2014 CRUVEILHER Thomas
*/

int             is_neg(char *str)
{
  int           i;
  int           counter;

  i = 0;
  counter = 0;
  while (str[i] > '9' || str[i] < '0')
    {
      if (str[i] == '-')
        counter++;
      i++;
    }
  if (counter % 2 != 0)
    return (1);
  else
    return (0);
}

int             is_num(char l)
{
  if (l >= '0' && l <= '9')
    return (1);
  else
    return (0);
}

int	my_atoi(char *str)
{
  int		i;
  unsigned int	nbr;

  nbr = 0;
  i = 0;
  while (str[i] != '\0')
    {
      while (is_num(str[i]) == 0)
	i++;
      while (is_num(str[i]) == 1)
	{
	  nbr = ((nbr * 10) + (str[i] - 48));
	  i++;
	}
    }
  if (is_neg(str) == 1)
    nbr = -nbr;
  return (nbr);
}
