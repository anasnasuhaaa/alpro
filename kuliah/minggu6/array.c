#include <stdio.h>

int main()
{

  int n;
  printf("Masukan jumlah angka: ");
  scanf("%d", &n);

  int angka_angka[n];
  for (int i = 0; i < n; i++)
  {
    scanf("%d", &angka_angka[i]);
  }
  int count1 = 0, count2 = 0, count3 = 0, count4 = 0, count5 = 0, count6 = 0;
  for (int k = 0; k < n; k++)
  {
    if (angka_angka[k] == 1)
    {
      count1++;
    }
    else if (angka_angka[k] == 2)
    {
      count2++;
    }
    else if (angka_angka[k] == 3)
    {
      count3++;
    }
    else if (angka_angka[k] == 4)
    {
      count4++;
    }
    else if (angka_angka[k] == 5)
    {
      count5++;
    }
    else if (angka_angka[k] == 6)
    {
      count6++;
    }
  }

  printf("Angka yang anda input: ");
  for (int j = 0; j < n; j++)
  {
    printf("%d ", angka_angka[j]);
  }

  printf("\nJumlah angka 1: %d \n", count1);
  printf("Jumlah angka 2: %d \n", count2);
  printf("Jumlah angka 3: %d \n", count3);
  printf("Jumlah angka 4: %d \n", count4);
  printf("Jumlah angka 5: %d \n", count5);
  printf("Jumlah angka 6: %d \n", count6);

  return 0;
}