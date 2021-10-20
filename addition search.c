#include <stdio.h>
int main()
{
  int x, y, sum, c;

  printf("Enter two numbers to add\n");
  scanf("%d%d", &x, &y);
 
  sum = x;

  for (c = 1; c <= y; c++)
        sum = sum + 1;

  printf("%d\n", sum);

  return 0;
}
