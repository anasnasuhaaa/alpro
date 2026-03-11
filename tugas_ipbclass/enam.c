#include <stdio.h>
#define n 5

int main()
{
  //
  int fun[5] = {3, 2, 5, 7, 32};
  int x = fun[3];
  // printf("%d", x);

  // int i;
  // int arr[5] = {1};
  // for (i = 0; i < 5; i++)
  //   printf("%d ", arr[i]);

  int a[n] = {1, 2, 3, 4, 5};
  int t;
  for (int k = 0; k < n; k++)
  {
    t = a[k];
    a[k] = a[n - k - 1];
    a[n - k - 1] = t;
  }

  for (int z = 0; z < n; z++)
  {
    printf("%d ", a[z]);
  }

  return 0;
}