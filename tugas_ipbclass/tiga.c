#include <stdio.h>
int main()
{
  // 1
  int l = 0;
  int counter = 1;
  do
    printf("Hello %d\n", counter++);
  while (l++ < 10);

  // 2
  int x = 0;
  do
    printf("A");
  while (0);
  printf("B");

  // 3
  double c;
  for (c = 0.0; c < 3.0; c++)
    printf("Hello\n");

  // 4
  int i;
  for (i = 0; i < 5; i++)
  {
    i = 10;
    printf("%d ", i);
    i++;
  }
  printf("\n");

  // 5
  int p;
  for (p = 0; p < 3; p++)
    ;
  printf("Hello\n");

  // 6
  int a = 1, b, c = 0, n = 5;
  for (; c += n--, b = n--;)
    printf("%d %d\n", a, b);

  // 7
  int z = 0, n;
  scanf("%d", &n);
  for (int i = 1; i < n; i *= 2)
    printf("HELLO-%d\n", ++z);

  // 8
  int e = 0;
  for (; e < 5; e++);
  printf("%d\n", e);

  // 10
  int k = 0;
  for (; ++k < 10;)
    printf("Hello %d\n", k);
  return 0;
}
