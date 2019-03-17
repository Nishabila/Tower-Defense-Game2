#include<stdio.h>
int main ()
{

    int f1=0,f2=1,f3,i=0,n;
    scanf("%d",&f3);

   for(i=0;i<=f3 ; i++)
   {

    f1=f2;
    f2=f3;
    f3=f1+f2;

   }
    printf("%d\n",f3);


return 0;
}
