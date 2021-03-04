/*
** EPITECH PROJECT, 2017
** my.h
** File description:
** header containing all the previous functions prototypes
*/

#ifndef PROTO_H_
#define PROTO_H_

void my_putchar(char c);
int my_putstr(char const *str);
int my_strlen(char const *str);
int my_getnbr(char const *str);
int my_put_nbr(int);
char *my_strcpy (char *dest, char const *src);
char *my_revstr(char *str);
void swap(int *, int);
void selector_printf_first(char *, int, va_list);
int my_printf(char *, ...);
char *my_fill_str(char *, int);
int my_number_len(int);
void my_base_conv(int, int, int);
char *my_base_conv_defined(int, int, char *, char *);


#endif
