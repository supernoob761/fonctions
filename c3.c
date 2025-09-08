#include <stdio.h>
int main(){
int a;
int b;
int max;

printf("first number : ");
scanf("%d",&a);

printf("second number : ");
scanf("%d",&b);

if(a<b)
printf("the biggest is : %d",b);
else
printf("the biggest is : %d",a);


}