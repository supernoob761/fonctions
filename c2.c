#include <stdio.h>
int calculate_total(int a, int b ) {
return a*b;

}

int main(){
int a;
int b;
printf("first number : ");
scanf("%d",&a);
printf("second number : ");
scanf("%d",&b);

int sum=calculate_total(a,b);
printf("the sum is : %d",sum);
return 0;
}   