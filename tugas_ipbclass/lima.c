#include <stdio.h>

int main()
{
  // No 1
  // for (int i = 1; i <= 5; i++)
  // {
  //   while (i--)
  //     printf("*");
  //   printf("\n");
  // }
  // No 2
  // for (int i = 0; i < 2; i++)
  //   for (int j = 0; j < 3; j++)
  //     printf("%d %d ", i, j);
  // printf("\n");
  // return 0;

  // No 3
  int n, r, c;
  scanf("%d", &n);

  for (r = 1; r <= n; r++)
    for (c = 1; c <= r; c++)
      printf("*");
  printf("\n");

  // No 4
  int i, j;
  for (i = 1; i <= 3; i++)
  {
    for (j = 1; j <= i; j++)
    {
      printf("a");
    }
    printf("b");
  }

  // No 5
  int k, m;
  for (k = m = 1; k <= 5; k++)
  {
    printf("a");
    while (m++ <= 5)
      printf("b");
  }

  // No 6
  // No 7

  // No 8
  int x;
  scanf("%d", &x);
  for (int row = 0; row < x; row++)
  {
    for (int col = 0; col < x; col++)
    {
      if (row <= col)
        printf("*");
    }
    printf("\n");
  }

  // No 9
  int count = 0;
  for (int i = 1; i <= 100; i++)
  {
    for (int j = 1; j <= 300; j++)
    {
      count++;
      printf("%d Hello\n", count);
    }
  }

  // No 10
  return 0;
}