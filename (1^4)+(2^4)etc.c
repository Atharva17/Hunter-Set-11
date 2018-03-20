#include <stdio.h>
#include<math.h>
int main(void) 
{
   int power,num,t;
   scanf("%d",&num);
   while(num!=0)
   {
   	t=num%10;
            power=power+pow(t,4);
   	num/=10;
   }
  printf("%d",power);
	return 0;
}
