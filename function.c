#include<stdio.h>
#include<stdlib.h>

//void SayHi();
void sayHi(char name[], int age);

//for calling the function
int main()
{
//  SayHi();

  sayHi("smith" ,40);
  sayHi("john" ,50);

  return 0;
}

//dont return any function 
//void SayHi()

void sayHi(char name[], int age)
{
//  printf("hello mike");

  printf("hello %s\n ,age is %d\n" ,name ,age);

}
