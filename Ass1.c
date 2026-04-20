#include<stdio.h>
int main()
{
int yr;
printf("Enter a year:");
scanf("%d",&yr);
if ((yr%400==0) || (yr%100!=0 && yr%4==0)){
printf("%d is a Leap Year",yr);
}
else{printf("%d is not a Leap Year",yr);}

return 0;
}