#include <stdio.h>
int main(){
int a;
int b;


printf("first number : ");
scanf("%d",&a);

printf("second number : ");
scanf("%d",&b);

if(a>b)
printf("the smalliest is : %d",b);
else
printf("the smalliest is : %d",a);


}