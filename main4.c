#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x,n1=1,n2=1,n3=0,n4=1,a=0,c=1,b=0,d=1,k;
    printf("plaese enter number of line : 1 for inc , 2 for dec , 3 for add , 4 for mul ");
    scanf("%i",&k);
    printf("plaese enter num  ");
    scanf("%i",&x);
    n2=x;
     if(k==1){
     while (n1<=x)
     {

         printf("num1 = %i " ,n1);
         n1++;
     }}
      else if(k==2){
      printf(" \n");
      while(n2<=x&&n2!=0)
      {

         printf("num2 = %i " ,n2);
        n2--;
      }
      }
      else if (k==3){
     printf(" \n");
     while((x-a)!=0)
      {
        n3=(x-a)+c ;
        printf("num3 = %i " ,n3);
        a++;
        c++;
       }
      }
      else if(k==4){
     printf("\n");
     while((x-b)!=0)
      {
        n4=(x-b)*d ;
        printf("num4 = %i " ,n4);
        b++;
        d++;
      }
      }


    return 0;
}
