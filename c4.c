#include <stdio.h>
int smallest_of_two(int j, int i){
if(j<i)
printf("%d is the smallest",j);
else
printf("%d is the smallest",i);
}


int main(){
int i;
int j;
printf("enter two numbers : ");
scanf("%d %d",&j,&i);
smallest_of_two(j,i);
return 0;
}