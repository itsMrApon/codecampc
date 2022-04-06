#include<stdio.h>
#include<stdlib.h>

int main(){
  char grade ='A';

  switch (grade)
  {
  case 'A' :
   /* constant-expression */
   printf("you did great");
    /* code */
    break;
  case 'B' :
   /* constant-expression */
   printf("you did alright");
    /* code */
    break;
  case 'C' :
   /* constant-expression */
   printf("you did poorly");
    /* code */
    break;
  case 'D' :
   /* constant-expression */
   printf("you did very bad");
    /* code */
    break;
  case 'F' :
   /* constant-expression */
   printf("you failed");
    /* code */
    break;
  
  default:
   printf("invalid Grade");
    break;
  }
  return 0;
}