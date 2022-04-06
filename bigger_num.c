#include<stdio.h>
#include<stdlib.h>

// int max(int num1, int num2, int num3 ){
//   int result;
//   if(num1 >= num2 && num1 >= num3){
//     result = num1;
//   } else if(num2 >= num1 && num2 >== num3){
//     result = num1;
//   }else{
//     result = num3;
//   }
//   return result;
// }

// int main(){
//   printf("%d", max(10, 2 ,3));
//   return 0;
// }



int main()
{

  int n1, n2, n3;

  printf("Enter three numbers: ");
  scanf("%d %d %d", &n1, &n2, &n3);
  
  if (n1 >= n2 && n1 >= n3)
    printf("%d is the largest number.", n1);

  else if (n2 >= n1 && n2 >= n3)
    printf("%d is the largest number.", n2);

  else
    printf("%d is the largest number.", n3);

  return 0;
}