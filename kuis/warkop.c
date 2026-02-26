// Solusi Soal Warkop
#include <stdio.h>
int main()
{
  int hari;
  scanf("%d", &hari);
  if (hari == 1 || ((hari % 3 == 1) && (hari % 5 == 1)))
  {
    printf("TEMPE DAN PISGOR");
  }
  else if (hari % 3 == 1)
  {
    printf("TEMPE");
  }
  else if (hari % 5 == 1)
  {
    printf("PISGOR");
  }
  else
  {
    printf("KOSONG");
  }
  return 0;
}