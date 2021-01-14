#include <stdio.h>

int main(void) {
  int m,n;
  scanf("%d",&m);
  scanf("%d",&n);
  float arr1[m][n];
  float arr2[m][n];

    for (int i = 0; i < m; i++)
    {
      for (int j = 0; j < n; j++)
      {
        scanf("%f", &arr1[i][j]);
      }
    }
    for (int i = 0; i < m; i++)
    {
      for (int j = 0; j <n; j++)
      {
        scanf("%f", &arr2[i][j]);
      }
        printf("\n");
    }
    for (int i = 0; i < m; i++)
    {
      for (int j = 0; j <n; j++)
      {
        arr2[i][j] = arr2[i][j] + arr1[i][j];
      }
    }
    for (int i = 0; i < m; i++)
    {
      for (int j = 0; j <n; j++)
      {
        printf("%.2f ",arr2[i][j]);
      }
      printf("\n");
    }
