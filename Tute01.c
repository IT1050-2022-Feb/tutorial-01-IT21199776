/* Exercise 1 - Calculations

   Write a C program to input marks of two subjects. Calculate and print the average of the two marks. */

#include <stdio.h>

int main() {  
   int mar1, mar2;
   int avg;
   
   printf("Enter Marks of 2 Subjects: ");
   scanf("%d%d", mar1,mar2);
   
   
  avg= mar1+mar2/2;
   printf("Avg Marks: %1f", avg);
  
  return 0;
}

