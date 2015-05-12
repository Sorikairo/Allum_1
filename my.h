/*
** my.h for my.h in /home/Sorikairo/rendu/Piscine-C-Jour_09
** 
** Made by CRUVEILHER Thomas
** Login   <cruvei_t@epitech.net>
** 
** Started on  Thu Oct 10 10:34:19 2013 CRUVEILHER Thomas
** Last update Sun Nov 17 13:36:17 2013 CRUVEILHER Thomas
*/

#ifndef MY_H_
# define MY_H_

#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <unistd.h>

int my_putchar(char c);
int my_isneg(int nb);
int my_put_nbr(int nb, int *taille);
int my_swap(int *a, int *b);
void my_putstr(char *str);
int my_strlen(char *str);
int my_getnbr(char *str);
void my_sort_int_tab(int *tab, int size);
int my_power_rec(int nb, int power);
int my_square_root(int nb);
int my_is_prime(int nombre);
int my_find_prime_sup(int nb);
char *my_strcpy(char *dest, char *src);
char *my_strncpy(char *dest, char *src, int nb);
char *my_revstr(char *str);
char *my_strstr(char *str, char *to_find);
int my_strcmp(char *s1, char *s2);
int my_strncmp(char *s1, char *s2, int nb);
char *my_strupcase(char *str);
char *my_strlowcase(char *str);
char *my_strcapitalize(char *str);
int my_str_isalpha(char *str);
int my_str_isnum(char *str);
int my_str_islower(char *str);
int my_str_isupper(char *str);
int my_str_isprintable(char *str);
int my_showstr(char *str);
int my_showmem(char *str, int size);
char *my_strcat(char *dest, char *src);
char *my_strncat(char *dest, char *src, int nb);
int my_strlcat(char *dest, char *src, int size);
int printf_int(va_list ap);
int printf_char(va_list ap);
int printf_str(va_list ap);
int printf_hexa(va_list ap);
int printf_octal(va_list ap);
int printf_unsigned(va_list ap);
int printf_pointers(va_list ap);
int printf_string(va_list ap);
char *my_convert_base(int, char *);
char *my_convert_base_long(long, char *);
int my_put_unsnbr(unsigned int, int *);
int my_putstring(char *);
int my_printf(const char *, ...);
#endif
