/*---------------------------------------------------------------
  This is test main.c
---------------------------------------------------------------*/
#include "stdio.h"
#include "test_vsn.h"


/*
 * Function main
 */
int main ( int argc, char *argv[] )
{
  int i ;

  /* Insert commment!! */
  /* */

  if ( argc > 1 )
  {
    for ( i = 1; i < argc; i++ ) printf ( ">argv[%d]=%s\n", i, argv[i] ) ;
  }

  printf ( "Version: %d.%d.%s\r\n", test_vsn_major, test_vsn_minor, test_vsn_string ) ;

  return 0;
}
