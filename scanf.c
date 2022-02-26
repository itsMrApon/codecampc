#include<stdio.h>
#include<stdlib.h>

int main()
{
  //int age;
  //double gpa;
  //char grade;
  //printf("enter the number");
  //scanf("%d" .&age);
  //scanf("%lf" .&age);
  //scanf("%c" .&age);
  //printf("entering value is %d", age);
  //printf("entering value is %f", age);
  //printf("entering value is %c", age);


  char name[20];
  printf("enter the number=");
  //for just 1 word
  //scanf("%s" name);
  
  //multiple word
  fgetc(name, 20, stdin);
  printf("entering value is %s", name);

  return 0;

}