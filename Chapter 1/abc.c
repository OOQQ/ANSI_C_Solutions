/*
Kernigham & Ritchie: The C Programming Language 2ed. ANSI C.
001 | Pag 010 | Chapter 1 | hello world | helloWorld.c
by: ekenmer
=======================================
abc.
*/

#include <stdio.h>

int main ( void )
{
  int num;
  int control = 100;

  printf ( "Enter something:" );
  scanf ( "%d", &num );

  while ( control > num ) {
    num = ++num;
    printf ( "%d\n", num );
  }

return 0;
}
