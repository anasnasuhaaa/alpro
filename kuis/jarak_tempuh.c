// Solusi Soal Jarak Tempuh
#include <stdio.h>
int main()
{

  int n;
  int jarak_tempuh = 0;
  scanf("%d", &n);
  int waktu[n];
  for (int i = 0; i < n; i++)
  {
    int kecepatan;
    scanf("%d %d", &kecepatan, &waktu[i]);
    if (waktu[i] > waktu[i - 1])
    {
      jarak_tempuh += kecepatan * (waktu[i] - waktu[i - 1]);
    }
    else
    {
      jarak_tempuh += kecepatan * waktu[i];
    }
  }

  printf("%d\n", jarak_tempuh);
  return 0;
}