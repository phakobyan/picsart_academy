#include <stdio.h>
int main()
{
  int a,b,c,d;
  scanf("%i%i%i", &a,&b,&c);
  if(a != 0 && b != 0 && c !=0)
  {
    if(a <= b && a <= c)
    {
        d = a;
    }
    else if(b <= a && b <= c)
    {
        d = b;
    }
    else
    {
        d = c;
    }
  }
  else
  {
    printf("try again");
  }
  while(d != 1)
  {
      if(a%d!=0 || b%d!=0 || c%d!=0)
      {
         d--;
      }
      else
        break;
  }
  printf("%i", d);
  return 0;
}
