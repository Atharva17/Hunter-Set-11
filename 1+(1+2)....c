#include <stdio.h>
int main(void) 
{
   int rev=0,num,count=0,sum=0,t,i,j,a[10];
   scanf("%d",&num);
   while(num!=0)
   {
   	t=num%10;
   	rev=rev*10+t;
   	num/=10;
   }
   while(rev!=0)
   {
   	t=rev%10;
   	a[i]=t;
   	i++;
   	count++;
   	rev/=10;
   	
   }
   for(i=0;i<count;i++)
	for(j=0;j<=i;j++)
	  sum+=a[j];
	  printf("sum of series %d",sum);
	return 0;
}
