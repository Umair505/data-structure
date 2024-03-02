#include <stdio.h>
int main()
{
  int a,b;
  scanf("%d %d",&a,&b);
  if (a>=0 && b>0)
    printf ("First quadrant");
  else if (a<0 && b>=0)
    printf ("Second quadrant");
  else if (a<0 && b<0)
    printf ("third quadrant");
  else if (a>=0 && b<0)
  printf ("fourth quadrant");
  else
    printf("origin");
}