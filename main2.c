#include <stdio.h>
#include <stdlib.h>

int main()
{
  int user_pick  ;
  int x=30 , y=10 , z;
  printf("please enter 1 for add \n 2 for diff \n 3 for mul \n4 for dev");
  scanf("%i",&user_pick);
  if (user_pick == 1)
  {
      z=x+y;

  }
  else if (user_pick == 2)
  {
      z=x-y;
  }
  else if (user_pick == 3)
  {
      z=x*y;
  }
  else if (user_pick == 4)
  {
      z=x/y;
  }

  printf("user_pick = %i",user_pick);
     printf("\n so z = %i",z );
    return 0;
}
