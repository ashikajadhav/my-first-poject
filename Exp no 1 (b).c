#include <stdio.h>
int main ()
{
float physics, chemistry, maths, total, average;

printf("Enter marks for Physics:\n");
scanf("%f", &physics);
printf("Enter marks for Chemistry:\n");
scanf("%f", &chemistry);
printf("Enter marks for Mathematics: \n");
scanf("%f", &maths);

total = physics + chemistry + maths;
average = total / 3.0;

printf("\n \n");
printf("PCM Total\t:\t%.2f / 300\n", total);

printf("Average Marks\t:\t%.2f%%\n", average);

printf(" \n");

printf("Status\t\t:\t%s\n",(average >= 50)?"ELIGIBLE for Admission" :"NOT ELIGIBLE for Admission");

printf("----------------------------------------\n");
return 0;
}
