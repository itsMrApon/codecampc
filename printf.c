#include <stdio.h>

int main()
{
  char Name[] = "mogga";
  int Age = 35;
  //print data
  printf("%s","number");
  printf("this is a char function where the name %s\n", Name);

  //print number
  printf("%d",500);
  printf("this is a int function where the age %d\n", Age);
  printf("name and age %s %d\n" , Name ,Age);
  //Name[] = "bogga";
  Age = 70;
  printf("name and age %s %d\n" , Name ,Age);

  return 0;
}