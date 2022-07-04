#include <stdio.h>
int main(){
   int marks;
   printf("Enter Number (0-100) :");
   scanf("%d" , &marks);

   if(marks <= 30){
      printf("Fail \n");

   }else{
    printf("Pass \n");
   }



return 0;
}