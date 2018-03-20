#include <stdio.h>
#include<math.h>
int main(void) 
{
   int power=0,rev=0,num,count=0,t,i=0,j=0,a[10];
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
    {
    	if(i==count-1)
	      j=0;
	    else
	       j=i+1;
      power=power+pow(a[i],a[j]);
    }
	  printf("%d",power);
  return 0;
}
