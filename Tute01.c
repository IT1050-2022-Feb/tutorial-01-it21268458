/* Exercise 1 - Calculations

   Write a C program to input marks of two subjects. Calculate and print the average of the two marks. */

#include <stdio.h>

int main() {
  int sub1,sub2,total;
   float avg;
   
   printf("Enter marks of subject 1: ");
   scanf("%d",&sub1);
   printf("Enter marks of subject 2: ");
   scanf("%d",&sub2);
   
   total= sub1+sub2;
   
   avg= (float)total/2.0;
   
   printf("Average : %.2f",avg);
  
  return 0;
}

