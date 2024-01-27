#include <stdio.h>

void bubbleSort(int array[], int n){
  int i, j, tmp;
  for (i = 0; i < n - 1; i++){
    for (j = 0; j < n - i - 1; j++){
      if (array[j] > array[j + 1]){
        tmp = array[j];
        array[j] = array[j + 1];
        array[j + 1] = tmp;
      }
    }
  }
}

int main() {
  int array[] = {72, 37, 23, 14, 21, 5, 90};
  int n = sizeof(array) / sizeof(array[0]);
  
  printf("Array sebelum diurutkan: \n");
  for (int i = 0; i < n; i++){
    printf("%d ", array[i]);
  }
  
  bubbleSort(array, n);

  printf("\nArray setelah diurutkan: \n");
  for (int i = 0; i < n; i++){
    printf("%d ", array[i]);
  }

  return 0;
}