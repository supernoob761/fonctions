#include <stdio.h>
int biggest_of_two(int j, int i){
if(j>i)
printf("%d is the biggest",j);
else
printf("%d is the biggest",i);
}


int main(){
int i;
int j;
printf("enter two numbers : ");
scanf("%d %d",&j,&i);
biggest_of_two(j,i);
return 0;
}

