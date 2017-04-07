#include <config.h>
#include <stdio.h>
#include "maxfunction.h"

int main()
{
  int i,j;

  printf("West Virginia University\n");
  printf("------------------------\n\n");
  printf("Package %s\n", PACKAGE_NAME);
  printf("Version %s\n", PACKAGE_VERSION);
  printf("Report bugs to %s\n\n", PACKAGE_BUGREPORT);

  printf("Enter 2 integer numbers:");
  scanf ("%d %d", &i, &j);
  
  printf( "\nMax value is : %d\n\n", max2int(i,j) );

  printf("Run Complete\n");
  return 0;
}
