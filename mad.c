#include<stdio.h>
#include<stdlib.h>
int main()
{
  char color[20];
  char plural[20];
  char celebrityF[20];
  char celebrityL[20];

  printf("color:");
  scanf("%s" , color);
  printf("plural:");
  scanf("%s" , plural);
  printf("celebrity:");
  scanf("%s%s" , celebrityF, celebrityL);

  printf("roses are %s\n" ,color);
  printf("%s are blue\n" ,plural);
  printf("i love %s%s\n" ,celebrityF, celebrityL);

  return 0;

}
