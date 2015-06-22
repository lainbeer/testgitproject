/*---------------------------------------------------------------
  This is test main.c
---------------------------------------------------------------*/
#include "stdio.h"
#include "test_vsn.h"


/*
 * Function main
 */
int main ( void )
{
  /* Insert commment!! */
  /* */

  printf ( "Version: %d.%d.%s\r\n", test_vsn_major, test_vsn_minor, test_vsn_string ) ;

  return 0;
}
