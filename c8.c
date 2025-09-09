# include <stdio.h>
int even_check(int num){

if(num%2==0)
return 1;
else
return 0;
}
int main(){
int num;
do{
printf("enter a number : ");
scanf("%d",&num);

int result=even_check(num);
if(result==1)
printf("1");
else
printf("0");
printf("\n");
}while(1);
return 0;
}
