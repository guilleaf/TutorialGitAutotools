#include <config.h>
#include <stdio.h>
#include "maxfunction.h"

int main()
{
  int i,j, sret, ans;

  printf("West Virginia University\n");
  printf("------------------------\n\n");
  printf("Package %s\n", PACKAGE_NAME);
  printf("Version %s\n", PACKAGE_VERSION);
  printf("Report bugs to %s\n\n", PACKAGE_BUGREPORT);

  printf("Enter 2 integer numbers:");
  sret = scanf ("%d %d", &i, &j);
  if (sret != 2) {
	  printf("ERROR: scanf could not read 2 integers, scanf return:%d\n", sret);
	  return(-1);
  }
  else printf( "\nMax value is : %d\n\n", max2int(i,j));
  
  printf("Run Complete\n");
  return(0);
}

