#include <stdio.h>

int main()
{
  int M, N;
  scanf("%d %d", &M, &N);

  int num = 0;

  for (int i = 0; i < M; i++)
  {
    for (int j = 0; j < N; j++)
    {
      printf("%d", num);

      if (j < N - 1)
      {
        printf(" ");
      }

      num = (num + 1) % 10;
    }
    printf("\n");
  }

  return 0;
}