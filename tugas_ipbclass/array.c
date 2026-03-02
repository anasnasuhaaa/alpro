#include <stdio.h>

int main()
{
  // int z = 0, n;
  // scanf("%d", &n);
  // for (int i = 1; i < n; i *= 2)
  //   printf("HELLO-%d\n", ++z);
  // n = 5
  // iterari 1: i = 1, z = 1
  // iterari 2: i = 2, z = 2
  // iterari 3: i = 4, z = 3
  // iterari 4: i = 8, z = 4 (loop berhenti karena i >= n)

  int a = 1, b, c = 0, n = 5;
  // for (; c = c + n--, b = n--;)
  //   printf("%d %d\n", a, b);

  int k = 0;
  int z = 0;
  k = k - n;
  z -= n;
  int j = -n;
  printf("%d %d %d\n", k, z, j);

  return 0;
}