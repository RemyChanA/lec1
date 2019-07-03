#include <stdio.h>
#include <stdlib.h>
int sum();
int diff();
int mul();
int divv();

int main()

{
    int x,y,k,z;
    printf("please enter 1 for add \n 2 for diff \n 3 for mul \n4 for dev");
   scanf("%i",&k);
   printf("enter the first num");
   scanf("%i",&x);
   printf("enter the sec num");
   scanf("%i",&y);
   if(k==1)
   {
      z=sum(x,y);
      printf("sum= %i",z);
   }
   else if (k==2)
   {
      z=diff(x,y);
      printf("diff= %i",z);

   }
   else if(k==3)
   {
      z= mul(x,y);
      printf("mul= %i",z);
   }
   else if (k==4)
   {
       z= divv(x,y);
       printf("div= %i",z);
   }
    return 0;

}


int sum(int x , int y)
{
    int z ;
    z=x+y;

    return z;
}
int diff(int x , int y)
{
    int z ;
    z=x-y;

    return z;
}
int mul(int x , int y)
{
    int z ;
    z=x*y;

    return z;
}
int divv(int x , int y)
{
    int z ;
    z=x/y;

    return z;
}





