#include<stdio.h>
#include<string.h>
#include<math.h>
#include<stdlib.h>
int main()
{
  int array[100], n, temp;
scanf("%d", &n);

  
  for (int i = 0; i< n; i++){
   // printf("Enter integer no.%d : ", i+1);
    scanf("%d", &array[i]);
    }
  for (int i = 1 ; i < n ; i++)
  {
    for (int j = 0 ; j < n-i; j++)
    {
      if (array[j] > array[j+1])
      {
        temp       = array[j];
        array[j]   = array[j+1];
        array[j+1] = temp;
      }
    }
  }
 for (int i = 0; i < n; i++)
     printf("%d\n", array[i]);

  }
