#include <stdio.h>
#include<math.h>
int main(void) 
{
   int power,rev=0,num,count=0,sum=0,t,i,j,a[10];
   scanf("%d",&num);
   while(num!=0)
   {
   	t=num%10;
            power=power+pow(t,4);
   	num/=10;
   }
  printf("sum of series %d",power);
	return 0;
}
