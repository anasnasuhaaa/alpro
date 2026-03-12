#include <stdio.h>

int main()
{
  int N;
  scanf("%d", &N);

  int prev, curr;
  scanf("%d", &prev);

  int maxProfit = 0;
  int maxLoss = 0;

  for (int i = 2; i <= N; i++)
  {
    scanf("%d", &curr);

    int diff = curr - prev;

    if (diff > maxProfit)
    {
      maxProfit = diff;
    }

    if (-diff > maxLoss)
    {
      maxLoss = -diff;
    }

    prev = curr;
  }

  printf("%d %d\n", maxProfit, maxLoss);

  return 0;
}