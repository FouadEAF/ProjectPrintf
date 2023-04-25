#ifndef _MAIN_H_
#define _MAIN_H_

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <stdarg.h>

typedef struct print
{
	char *type_arg;
	int (*f)(va_list, char *, unsigned int);
} print_t;

int _printf(const char *format, ...);
int print_prg(va_list __attribute__((unused)), char *, unsigned int);
int print_chr(va_list arguments, char *buf, unsigned int ibuf);
int print_str(va_list arguments, char *buf, unsigned int ibuf);
int print_int(va_list arguments, char *buf, unsigned int ibuf);
int print_bnr(va_list arguments, char *buf, unsigned int ibuf);
int print_unt(va_list arguments, char *buf, unsigned int ibuf);
int print_oct(va_list arguments, char *buf, unsigned int ibuf);
int print_hex(va_list arguments, char *buf, unsigned int ibuf);
int print_upx(va_list arguments, char *buf, unsigned int ibuf);
int print_usr(va_list arguments, char *buf, unsigned int ibuf);
int print_add(va_list arguments, char *buf, unsigned int ibuf);
int print_rev(va_list arguments, char *buf, unsigned int ibuf);
int print_rot(va_list arguments, char *buf, unsigned int ibuf);
int (*get_print_func(const char *s, int index))(va_list, char *, unsigned int);
int ev_print_func(const char *s, int index);
unsigned int handl_buf(char *buf, char c, unsigned int ibuf);
int print_buf(char *buf, unsigned int nbuf);
int printplusint(va_list arguments, char *buf, unsigned int ibuf);
int printspcint(va_list arguments, char *buf, unsigned int ibuf);

int printLint(va_list arguments, char *buf, unsigned int ibuf);
int printLunint(va_list arguments, char *buf, unsigned int ibuf);
int printLoct(va_list arguments, char *buf, unsigned int ibuf);
int printLhex(va_list arguments, char *buf, unsigned int ibuf);
int printLupx(va_list arguments, char *buf, unsigned int ibuf);

int printShInt(va_list arguments, char *buf, unsigned int ibuf);
int printShunInt(va_list arguments, char *buf, unsigned int ibuf);
int printShOct(va_list arguments, char *buf, unsigned int ibuf);
int printShHex(va_list arguments, char *buf, unsigned int ibuf);
int printShupx(va_list arguments, char *buf, unsigned int ibuf);

int printnumoct(va_list arguments, char *buf, unsigned int ibuf);
int printnumhex(va_list arguments, char *buf, unsigned int ibuf);
int printnumupx(va_list arguments, char *buf, unsigned int ibuf);

char *fill_binary_array(char *binary, long int int_in, int isneg, int limit);
char *fill_oct_array(char *bnr, char *oct);
char *fill_long_oct_array(char *bnr, char *oct);
char *fill_short_oct_array(char *bnr, char *oct);
char *fill_hex_array(char *bnr, char *hex, int isupp, int limit);

#endif
